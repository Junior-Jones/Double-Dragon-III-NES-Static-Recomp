#include "dd3_core.h"
#include "dd3_hash.h"

#include "dd3_ppu_render.h"
#include "dd3_static_runtime.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define DD3_CPU_HZ 1789773u
#define DD3_SNAPSHOT_MAGIC "DD3FIX01"
#define DD3_SNAPSHOT_VERSION 2u

typedef struct DD3Synth {
    uint8_t regs[0x18];
    uint8_t pulse_step[2];
    uint32_t pulse_remainder[2];
    uint8_t triangle_step;
    uint32_t triangle_remainder;
    uint16_t noise_lfsr;
    uint32_t noise_remainder;
    uint64_t cycle;
} DD3Synth;

struct DD3Core {
    DD3StaticRuntime runtime;
    const DD3Rom *rom;
    uint32_t frame[DD3_CORE_FRAME_PIXELS];
    uint64_t copied_frame;
    uint8_t frame_valid;
    DD3Synth synth;
    size_t audio_event_index;
    uint64_t audio_sample_index;
    int16_t pcm[DD3_CORE_PCM_CAPACITY];
    size_t pcm_head;
    size_t pcm_count;
    uint64_t pcm_dropped_total;
    uint8_t pcm_overflowed;
    DD3CoreTrap trap;
    char error[DD3_STATIC_ERROR_CAP];
};

typedef struct DD3SnapshotDisk {
    char magic[8];
    uint32_t version;
    uint32_t rom_crc32;
    uint64_t event_count;
    DD3StaticRuntime runtime;
    uint32_t frame[DD3_CORE_FRAME_PIXELS];
    uint64_t copied_frame;
    uint8_t frame_valid;
    DD3Synth synth;
    uint64_t audio_event_index;
    uint64_t audio_sample_index;
    int16_t pcm[DD3_CORE_PCM_CAPACITY];
    uint64_t pcm_head;
    uint64_t pcm_count;
    uint64_t pcm_dropped_total;
    uint8_t pcm_overflowed;
    int32_t trap;
} DD3SnapshotDisk;

/* Snapshots are bound to this Windows x64 payload layout and generated core.
 * The complete payload is authenticated before any runtime state is imported. */
typedef struct DD3SnapshotHeader {
    char magic[8];
    uint32_t version;
    uint32_t disk_size;
    uint64_t payload_size;
    char rom_sha256[65];
    char core_sha256[65];
    uint8_t payload_sha256[32];
} DD3SnapshotHeader;

static const uint16_t NOISE_PERIODS[16] = {
    4u,8u,16u,32u,64u,96u,128u,160u,202u,254u,380u,508u,762u,1016u,2034u,4068u
};

static void copy_error(char *out,size_t cap,const char *text){
    size_t n;if(!out||!cap)return;if(!text)text="unknown core error";
    n=strlen(text);if(n>=cap)n=cap-1u;memcpy(out,text,n);out[n]=0;
}

static uint16_t pulse_timer(const DD3Synth *s,unsigned channel){unsigned b=channel?4u:0u;return(uint16_t)(s->regs[b+2u]|((uint16_t)(s->regs[b+3u]&7u)<<8));}
static uint16_t triangle_timer(const DD3Synth *s){return(uint16_t)(s->regs[0x0Au]|((uint16_t)(s->regs[0x0Bu]&7u)<<8));}
static void advance_noise(DD3Synth *s,uint64_t delta){
    uint32_t period=NOISE_PERIODS[s->regs[0x0Eu]&15u];uint64_t total=(uint64_t)s->noise_remainder+delta,ticks=total/period;
    s->noise_remainder=(uint32_t)(total%period);while(ticks--){unsigned tap=(s->regs[0x0Eu]&0x80u)?6u:1u;uint16_t feedback=(uint16_t)((s->noise_lfsr^(s->noise_lfsr>>tap))&1u);s->noise_lfsr=(uint16_t)((s->noise_lfsr>>1)|(feedback<<14));if(!s->noise_lfsr)s->noise_lfsr=1u;}
}
static void synth_advance(DD3Synth *s,uint64_t target){
    unsigned ch;uint64_t delta,total,ticks;uint32_t period;uint16_t timer;if(target<=s->cycle)return;delta=target-s->cycle;
    for(ch=0;ch<2u;++ch){timer=pulse_timer(s,ch);period=2u*((uint32_t)timer+1u);total=(uint64_t)s->pulse_remainder[ch]+delta;ticks=total/period;s->pulse_remainder[ch]=(uint32_t)(total%period);s->pulse_step[ch]=(uint8_t)((s->pulse_step[ch]+ticks)&7u);}
    timer=triangle_timer(s);period=(uint32_t)timer+1u;total=(uint64_t)s->triangle_remainder+delta;ticks=total/period;s->triangle_remainder=(uint32_t)(total%period);s->triangle_step=(uint8_t)((s->triangle_step+ticks)&31u);advance_noise(s,delta);s->cycle=target;
}
static void synth_write(DD3Synth *s,uint16_t address,uint8_t value){unsigned i;if(address<0x4000u||address>0x4017u)return;i=(unsigned)(address-0x4000u);s->regs[i]=value;if(address==0x4003u){s->pulse_step[0]=0;s->pulse_remainder[0]=0;}else if(address==0x4007u){s->pulse_step[1]=0;s->pulse_remainder[1]=0;}}
static int pulse_output(const DD3Synth *s,unsigned ch){
    static const uint8_t duty[4][8]={{0,1,0,0,0,0,0,0},{0,1,1,0,0,0,0,0},{0,1,1,1,1,0,0,0},{1,0,0,1,1,1,1,1}};
    unsigned b=ch?4u:0u,en=ch?1u:0u,d=s->regs[b]>>6;int volume=(int)(s->regs[b]&15u);uint16_t timer=pulse_timer(s,ch);
    if(!(s->regs[0x15u]&(1u<<en))||timer<8u||timer>0x7ffu||!volume)return 0;return duty[d][s->pulse_step[ch]]?volume:-volume;
}
static int triangle_output(const DD3Synth *s){static const uint8_t seq[32]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};uint16_t timer=triangle_timer(s);if(!(s->regs[0x15u]&4u)||!(s->regs[8]&0x7fu)||timer<2u)return 0;return(int)seq[s->triangle_step]*2-15;}
static int noise_output(const DD3Synth *s){int volume=(int)(s->regs[0x0cu]&15u);if(!(s->regs[0x15u]&8u)||!volume)return 0;return(s->noise_lfsr&1u)?-volume:volume;}
static int16_t synth_sample(const DD3Synth *s){int mixed=pulse_output(s,0u)*450+pulse_output(s,1u)*450+triangle_output(s)*260+noise_output(s)*350;if(s->regs[0x15u]&0x10u)mixed+=((int)s->regs[0x11u]-64)*64;if(mixed>32767)mixed=32767;else if(mixed<-32768)mixed=-32768;return(int16_t)mixed;}

static void pcm_push(DD3Core *core,int16_t sample){
    size_t tail;if(core->pcm_count==DD3_CORE_PCM_CAPACITY){core->pcm_head=(core->pcm_head+1u)%DD3_CORE_PCM_CAPACITY;--core->pcm_count;++core->pcm_dropped_total;core->pcm_overflowed=1u;}
    tail=(core->pcm_head+core->pcm_count)%DD3_CORE_PCM_CAPACITY;core->pcm[tail]=sample;++core->pcm_count;
}
static void render_audio(DD3Core *core){
    for(;;){uint64_t target=(core->audio_sample_index*DD3_CPU_HZ)/DD3_CORE_PCM_SAMPLE_RATE;if(target>core->runtime.cpu_cycles)break;
        while(core->audio_event_index<core->runtime.apu_event_count&&core->runtime.apu_events[core->audio_event_index].cpu_cycle<=target){DD3ApuEvent *e=&core->runtime.apu_events[core->audio_event_index++];synth_advance(&core->synth,e->cpu_cycle);synth_write(&core->synth,e->address,e->value);}
        synth_advance(&core->synth,target);pcm_push(core,synth_sample(&core->synth));++core->audio_sample_index;
    }
    /* Retire consumed register writes. Live playback must not accumulate the
     * offline diagnostic log until its hard capacity is exhausted. */
    if(core->audio_event_index){
        size_t remaining=core->runtime.apu_event_count-core->audio_event_index;
        memmove(core->runtime.apu_events,core->runtime.apu_events+core->audio_event_index,
                remaining*sizeof(DD3ApuEvent));
        core->runtime.apu_event_count=remaining;
        core->audio_event_index=0u;
    }
}
static DD3CoreTrap runtime_trap(const DD3StaticRuntime *rt){if(!rt||!rt->stopped)return DD3_CORE_TRAP_NONE;switch(rt->error_code){case DD3_STATIC_ERR_ROM:return DD3_CORE_TRAP_BAD_ROM;case DD3_STATIC_ERR_UNPROVEN:return DD3_CORE_TRAP_MISSING_IDENTITY;case DD3_STATIC_ERR_LIMIT:return DD3_CORE_TRAP_STEP_LIMIT;case DD3_STATIC_ERR_APU_EVENTS:return DD3_CORE_TRAP_APU_OUTPUT;default:return DD3_CORE_TRAP_STATE_TRANSFER;}}
static int capture_frame(DD3Core *core){
    uint8_t rgb[DD3_CORE_FRAME_PIXELS*3u];const uint8_t *source=core->runtime.video_frame_ready?core->runtime.video_frame_rgb:rgb;size_t i;
    if(!core->runtime.video_frame_ready&&!dd3_ppu_render_rgb(&core->runtime,rgb,sizeof(rgb)))return 0;if(!source)return 0;
    for(i=0;i<DD3_CORE_FRAME_PIXELS;++i)core->frame[i]=0xff000000u|((uint32_t)source[i*3u]<<16)|((uint32_t)source[i*3u+1u]<<8)|source[i*3u+2u];
    core->copied_frame=core->runtime.state.ppu.frame;core->frame_valid=1u;return 1;
}

DD3Core *dd3_core_create(void){DD3Core *core=(DD3Core*)calloc(1u,sizeof(*core));if(core)core->synth.noise_lfsr=1u;return core;}
void dd3_core_destroy(DD3Core *core){if(!core)return;dd3_static_runtime_destroy(&core->runtime);free(core);}
int dd3_core_reset(DD3Core *core,const DD3Rom *rom,char *error,size_t cap){
    DD3StaticRuntime replacement;char reason[DD3_STATIC_ERROR_CAP]={0};if(!core||!rom){copy_error(error,cap,"invalid fixed-core reset request");return 0;}memset(&replacement,0,sizeof(replacement));
    if(!dd3_static_runtime_init(&replacement,rom,reason,sizeof(reason))){copy_error(error,cap,reason);return 0;}dd3_static_runtime_destroy(&core->runtime);memset(core,0,sizeof(*core));core->runtime=replacement;core->rom=rom;core->synth.noise_lfsr=1u;copy_error(error,cap,"");return 1;
}
int dd3_core_advance_frame(DD3Core *core,uint8_t p1,uint8_t p2,uint64_t limit,DD3CoreFrameResult *result){
    uint64_t start,target,instructions;if(!core||!result||core->runtime.stopped)return 0;memset(result,0,sizeof(*result));start=core->runtime.state.ppu.frame;target=start+1u;instructions=core->runtime.instructions;if(!limit)limit=DD3_CORE_DEFAULT_FRAME_INSTRUCTION_LIMIT;
    core->runtime.controller_live[0]=p1;core->runtime.controller_live[1]=p2;if(p1)++core->runtime.controller_active_frames[0];if(p2)++core->runtime.controller_active_frames[1];(void)dd3_static_runtime_request_video_frame(&core->runtime,start);
    while(!core->runtime.stopped&&core->runtime.state.ppu.frame<target&&core->runtime.instructions-instructions<limit)if(!dd3_static_runtime_step(&core->runtime))break;
    if(!core->runtime.stopped&&core->runtime.state.ppu.frame<target){core->runtime.stopped=1u;core->runtime.error_code=DD3_STATIC_ERR_LIMIT;copy_error(core->runtime.error,sizeof(core->runtime.error),"frame instruction limit reached");}
    core->trap=runtime_trap(&core->runtime);render_audio(core);result->completed=(uint8_t)(!core->runtime.stopped&&core->runtime.state.ppu.frame>=target);result->stopped=core->runtime.stopped;result->player1_buttons=p1;result->player2_buttons=p2;result->program_counter=core->runtime.state.cpu.pc;result->physical_prg_bank=(int16_t)dd3_static_resolve_code_bank(&core->runtime,core->runtime.state.cpu.pc);result->start_frame=start;result->end_frame=core->runtime.state.ppu.frame;result->executed_instructions=core->runtime.instructions-instructions;result->pcm_available=core->pcm_count;result->pcm_dropped_total=core->pcm_dropped_total;result->pcm_overflowed=core->pcm_overflowed;result->trap=core->trap;
    if(result->completed){result->frame_ready=(uint8_t)capture_frame(core);if(!result->frame_ready){core->trap=DD3_CORE_TRAP_FRAME_OUTPUT;result->trap=core->trap;return 0;}}return result->completed!=0;
}
int dd3_core_frame_copy_bgra(const DD3Core *core,uint32_t *output,size_t capacity,uint64_t *frame){if(!core||!core->frame_valid||!output||capacity<DD3_CORE_FRAME_PIXELS)return 0;memcpy(output,core->frame,sizeof(core->frame));if(frame)*frame=core->copied_frame;return 1;}
size_t dd3_core_audio_available(const DD3Core *core){return core?core->pcm_count:0u;}
size_t dd3_core_audio_read(DD3Core *core,int16_t *output,size_t capacity){size_t n,i;if(!core||!output)return 0;n=core->pcm_count<capacity?core->pcm_count:capacity;for(i=0;i<n;++i)output[i]=core->pcm[(core->pcm_head+i)%DD3_CORE_PCM_CAPACITY];core->pcm_head=(core->pcm_head+n)%DD3_CORE_PCM_CAPACITY;core->pcm_count-=n;return n;}
void dd3_core_audio_clear(DD3Core *core){if(core){core->pcm_head=core->pcm_count=0;core->pcm_overflowed=0;}}
DD3CoreTrap dd3_core_trap(const DD3Core *core){return core?core->trap:DD3_CORE_TRAP_BAD_ROM;}
const char *dd3_core_trap_name(DD3CoreTrap trap){switch(trap){case DD3_CORE_TRAP_NONE:return"none";case DD3_CORE_TRAP_BAD_ROM:return"bad-rom";case DD3_CORE_TRAP_MISSING_IDENTITY:return"missing-static-identity";case DD3_CORE_TRAP_STEP_LIMIT:return"step-limit";case DD3_CORE_TRAP_APU_OUTPUT:return"apu-output";case DD3_CORE_TRAP_FRAME_OUTPUT:return"frame-output";case DD3_CORE_TRAP_STATE_TRANSFER:return"state-transfer";default:return"fixed-core-error";}}
int dd3_core_error_copy(const DD3Core *core,char *output,size_t capacity){if(!core)return 0;copy_error(output,capacity,core->runtime.error);return 1;}
int dd3_core_observe(const DD3Core *core,DD3CoreObservation *o){if(!core||!o)return 0;memset(o,0,sizeof(*o));o->trap=core->trap;o->program_counter=core->runtime.state.cpu.pc;o->physical_prg_bank=(int16_t)dd3_static_resolve_code_bank(&core->runtime,core->runtime.state.cpu.pc);o->last_program_counter=core->runtime.last_pc;o->last_physical_prg_bank=(int16_t)core->runtime.last_physical_bank;o->runtime_error_code=(uint32_t)core->runtime.error_code;o->executed_instructions=core->runtime.instructions;o->static_hits=core->runtime.static_hits;o->cpu_cycles=core->runtime.cpu_cycles;o->ppu_cycles=core->runtime.ppu_cycles;o->frames=core->runtime.state.ppu.frame;o->nmi_count=core->runtime.nmi_count;o->irq_count=core->runtime.irq_count;o->mapper_writes=core->runtime.mapper_writes;o->apu_register_writes=core->runtime.apu_register_writes;o->controller_reads[0]=core->runtime.controller_reads[0];o->controller_reads[1]=core->runtime.controller_reads[1];o->controller_latches=core->runtime.controller_latches;o->controller_active_frames[0]=core->runtime.controller_active_frames[0];o->controller_active_frames[1]=core->runtime.controller_active_frames[1];o->apu_event_count=core->runtime.apu_event_count;o->pcm_available=core->pcm_count;o->pcm_dropped_total=core->pcm_dropped_total;o->copied_frame_number=core->copied_frame;o->stopped=core->runtime.stopped;o->apu_event_overflow=core->runtime.apu_event_overflow;o->copied_frame_valid=core->frame_valid;o->pcm_overflowed=core->pcm_overflowed;return 1;}

int dd3_core_snapshot_save(const DD3Core *core,const char *path,char *error,size_t cap){
    DD3SnapshotDisk *disk;
    DD3SnapshotHeader header;
    uint8_t *payload;
    size_t size;
    FILE *file;
    char temporary[1024];
    int ok;
    if(!core||!core->rom||!path||!*path){copy_error(error,cap,"invalid snapshot save request");return 0;}
    size=sizeof(*disk)+core->runtime.apu_event_count*sizeof(DD3ApuEvent);
    payload=(uint8_t*)calloc(1u,size);
    if(!payload){copy_error(error,cap,"cannot allocate snapshot");return 0;}
    disk=(DD3SnapshotDisk*)payload;
    memcpy(disk->magic,DD3_SNAPSHOT_MAGIC,8u);
    disk->version=DD3_SNAPSHOT_VERSION;
    disk->rom_crc32=core->rom->file_crc32;
    disk->event_count=core->runtime.apu_event_count;
    disk->runtime=core->runtime;
    disk->runtime.rom=NULL;
    disk->runtime.apu_events=NULL;
    disk->runtime.apu_event_capacity=0u;
    disk->runtime.video_frame_rgb=NULL;
    memset(disk->runtime.error,0,sizeof(disk->runtime.error));
    memcpy(disk->frame,core->frame,sizeof(disk->frame));
    disk->copied_frame=core->copied_frame;
    disk->frame_valid=core->frame_valid;
    disk->synth=core->synth;
    disk->audio_event_index=core->audio_event_index;
    disk->audio_sample_index=core->audio_sample_index;
    memcpy(disk->pcm,core->pcm,sizeof(disk->pcm));
    disk->pcm_head=core->pcm_head;
    disk->pcm_count=core->pcm_count;
    disk->pcm_dropped_total=core->pcm_dropped_total;
    disk->pcm_overflowed=core->pcm_overflowed;
    disk->trap=(int32_t)core->trap;
    if(disk->event_count)memcpy(payload+sizeof(*disk),core->runtime.apu_events,(size_t)disk->event_count*sizeof(DD3ApuEvent));
    memset(&header,0,sizeof(header));
    memcpy(header.magic,DD3_SNAPSHOT_MAGIC,8u);
    header.version=DD3_SNAPSHOT_VERSION;
    header.disk_size=(uint32_t)sizeof(*disk);
    header.payload_size=size;
    copy_error(header.rom_sha256,sizeof(header.rom_sha256),core->rom->sha256);
    copy_error(header.core_sha256,sizeof(header.core_sha256),DD3_CORE_GENERATED_TREE_SHA256);
    dd3_sha256(payload,size,header.payload_sha256);
    if(strlen(path)+5u>=sizeof(temporary)){free(payload);copy_error(error,cap,"snapshot path is too long");return 0;}
    snprintf(temporary,sizeof(temporary),"%s.tmp",path);
    file=fopen(temporary,"wb");
    if(!file){free(payload);copy_error(error,cap,"cannot create snapshot");return 0;}
    ok=fwrite(&header,1u,sizeof(header),file)==sizeof(header)&&fwrite(payload,1u,size,file)==size;
    free(payload);
    ok=fclose(file)==0&&ok;
#ifdef _WIN32
    if(ok)ok=MoveFileExA(temporary,path,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)!=FALSE;
#else
    if(ok)ok=rename(temporary,path)==0;
#endif
    if(!ok){remove(temporary);copy_error(error,cap,"cannot commit snapshot");return 0;}
    copy_error(error,cap,"");return 1;
}
int dd3_core_snapshot_load(DD3Core *core,const char *path,const DD3Rom *rom,char *error,size_t cap){
    DD3SnapshotHeader header;
    DD3SnapshotDisk *disk;
    DD3StaticRuntime replacement;
    DD3ApuEvent *events=NULL;
    uint8_t *payload=NULL,digest[32];
    FILE *file;
    size_t size,count;
    int ok;
    if(!core||!rom||!path||!*path){copy_error(error,cap,"invalid snapshot load request");return 0;}
    file=fopen(path,"rb");
    if(!file){copy_error(error,cap,"cannot open snapshot");return 0;}
    ok=fread(&header,1u,sizeof(header),file)==sizeof(header)&&
        memcmp(header.magic,DD3_SNAPSHOT_MAGIC,8u)==0&&header.version==DD3_SNAPSHOT_VERSION&&
        header.disk_size==sizeof(DD3SnapshotDisk)&&
        memcmp(header.rom_sha256,rom->sha256,65u)==0&&
        memcmp(header.core_sha256,DD3_CORE_GENERATED_TREE_SHA256,65u)==0&&
        header.payload_size>=sizeof(DD3SnapshotDisk)&&
        header.payload_size<=sizeof(DD3SnapshotDisk)+(uint64_t)DD3_APU_EVENT_HARD_CAP*sizeof(DD3ApuEvent);
    size=ok?(size_t)header.payload_size:0u;
    if(ok){payload=(uint8_t*)malloc(size);ok=payload&&fread(payload,1u,size,file)==size&&fgetc(file)==EOF;}
    if(fclose(file)!=0)ok=0;
    if(ok){dd3_sha256(payload,size,digest);ok=memcmp(digest,header.payload_sha256,sizeof(digest))==0;}
    if(!ok){free(payload);copy_error(error,cap,"snapshot is corrupt or belongs to another core build");return 0;}
    disk=(DD3SnapshotDisk*)payload;
    ok=disk->version==DD3_SNAPSHOT_VERSION&&memcmp(disk->magic,DD3_SNAPSHOT_MAGIC,8u)==0&&
        disk->rom_crc32==rom->file_crc32&&disk->event_count<=DD3_APU_EVENT_HARD_CAP&&
        size==sizeof(*disk)+disk->event_count*sizeof(DD3ApuEvent)&&
        disk->runtime.apu_event_count==disk->event_count&&disk->audio_event_index<=disk->event_count&&
        disk->runtime.rom==NULL&&disk->runtime.apu_events==NULL&&disk->runtime.video_frame_rgb==NULL&&
        disk->pcm_head<DD3_CORE_PCM_CAPACITY&&disk->pcm_count<=DD3_CORE_PCM_CAPACITY&&
        disk->synth.pulse_step[0]<8u&&disk->synth.pulse_step[1]<8u&&disk->synth.triangle_step<32u&&
        disk->runtime.state.ppu.scanline<262u&&disk->runtime.state.ppu.dot<341u;
    if(!ok){free(payload);copy_error(error,cap,"snapshot state is invalid");return 0;}
    count=(size_t)disk->event_count;
    if(count){events=(DD3ApuEvent*)malloc(count*sizeof(*events));if(!events){free(payload);copy_error(error,cap,"cannot allocate snapshot events");return 0;}memcpy(events,payload+sizeof(*disk),count*sizeof(*events));}
    replacement=disk->runtime;
    replacement.rom=rom;
    replacement.apu_events=events;
    replacement.apu_event_capacity=count;
    replacement.video_frame_ready=0u;
    replacement.video_capture_active=0u;
    dd3_static_runtime_destroy(&core->runtime);
    core->runtime=replacement;core->rom=rom;
    memcpy(core->frame,disk->frame,sizeof(core->frame));
    core->copied_frame=disk->copied_frame;core->frame_valid=disk->frame_valid;
    core->synth=disk->synth;core->audio_event_index=(size_t)disk->audio_event_index;
    core->audio_sample_index=disk->audio_sample_index;
    core->pcm_head=core->pcm_count=0u;core->pcm_overflowed=0u;
    core->pcm_dropped_total=disk->pcm_dropped_total;core->trap=(DD3CoreTrap)disk->trap;
    free(payload);copy_error(error,cap,"");return 1;
}
