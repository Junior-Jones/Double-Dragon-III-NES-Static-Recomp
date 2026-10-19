#ifndef DD3_STATIC_RUNTIME_H
#define DD3_STATIC_RUNTIME_H
#include "dd3_rom.h"
#include "dd3_mmc3.h"
#ifdef __cplusplus
extern "C" {
#endif
#define DD3_STATIC_RUNTIME_VERSION "Beta 01"
#define DD3_STATIC_ERROR_CAP 256u
#define DD3_APU_EVENT_INITIAL_CAP 8192u
#define DD3_APU_EVENT_HARD_CAP 262144u
#define DD3_STATIC_RAM_CODE_BANK 16

typedef struct DD3StaticCpu {
    uint8_t a, x, y, s;
    uint8_t n, v, d, i, z, c;
    uint16_t pc;
} DD3StaticCpu;

typedef struct DD3StaticPpu {
    uint8_t ctrl, mask, status, oam_addr;
    uint16_t v, t;
    uint8_t fine_x, write_toggle, read_buffer, open_bus;
    uint8_t scroll_x, scroll_y;
    uint16_t scanline, dot;
    uint64_t frame;
    uint8_t nametable[0x1000];
    uint8_t palette[0x20];
    uint8_t oam[0x100];
} DD3StaticPpu;

typedef struct DD3PpuScanlineState {
    uint16_t v;
    uint8_t fine_x, ctrl, mask, valid;
    DD3Mmc3 mmc3;
} DD3PpuScanlineState;

typedef struct DD3StaticState {
    DD3StaticCpu cpu;
    DD3StaticPpu ppu;
    DD3Mmc3 mmc3;
    uint8_t work_ram[0x800];
    uint8_t prg_ram[0x2000];
    uint8_t apu[0x18];
} DD3StaticState;

typedef struct DD3ApuEvent {
    uint64_t cpu_cycle;
    uint16_t address;
    uint8_t value;
    uint8_t reserved[5];
} DD3ApuEvent;

typedef struct DD3StaticRuntime {
    DD3StaticState state;
    const DD3Rom *rom;
    uint64_t instructions, static_hits, cpu_cycles, ppu_cycles;
    uint64_t memory_reads, memory_writes, ppu_register_reads, ppu_register_writes;
    uint64_t apu_register_writes, mapper_writes, nmi_count, irq_count, oam_dma_count;
    uint64_t controller_reads[2], controller_latches, controller_active_frames[2];
    uint8_t controller_live[2], controller_shift[2], controller_strobe;
    uint8_t nmi_pending, irq_pending, stopped;
    uint16_t last_pc;
    int last_physical_bank, error_code;
    DD3ApuEvent *apu_events;
    size_t apu_event_count, apu_event_capacity;
    uint8_t apu_event_overflow;
    uint8_t *video_frame_rgb;
    uint64_t video_capture_frame;
    uint64_t video_completed_frame;
    uint16_t video_scanlines_rendered;
    uint8_t video_capture_active;
    uint8_t video_frame_ready;
    DD3PpuScanlineState video_scanline_state[240];
    char error[DD3_STATIC_ERROR_CAP];
} DD3StaticRuntime;

enum { DD3_STATIC_OK=0, DD3_STATIC_ERR_ROM=1, DD3_STATIC_ERR_UNPROVEN=2, DD3_STATIC_ERR_LIMIT=3, DD3_STATIC_ERR_APU_EVENTS=4 };

int dd3_static_runtime_init(DD3StaticRuntime *rt, const DD3Rom *rom, char *error, size_t error_cap);
void dd3_static_runtime_destroy(DD3StaticRuntime *rt);
int dd3_static_runtime_request_video_frame(DD3StaticRuntime *rt, uint64_t frame);
void dd3_static_runtime_release_video_frame(DD3StaticRuntime *rt);
int dd3_static_runtime_step(DD3StaticRuntime *rt);
uint8_t dd3_static_read8(DD3StaticRuntime *rt, uint16_t address);
void dd3_static_write8(DD3StaticRuntime *rt, uint16_t address, uint8_t value);
uint16_t dd3_static_read16_zp(DD3StaticRuntime *rt, uint8_t address);
uint16_t dd3_static_read16_jmp_bug(DD3StaticRuntime *rt, uint16_t address);
void dd3_static_push8(DD3StaticRuntime *rt, uint8_t value);
uint8_t dd3_static_pop8(DD3StaticRuntime *rt);
void dd3_static_set_nz(DD3StaticRuntime *rt, uint8_t value);
void dd3_static_compare8(DD3StaticRuntime *rt, uint8_t reg, uint8_t value);
void dd3_static_unpack_p(DD3StaticRuntime *rt, uint8_t p);
uint8_t dd3_static_pack_p(const DD3StaticRuntime *rt, int brk);
int dd3_static_complete(DD3StaticRuntime *rt, unsigned cycles);
int dd3_static_page_crossed(uint16_t first, uint16_t second);
int dd3_static_resolve_physical_bank(const DD3StaticRuntime *rt, uint16_t address);
int dd3_static_resolve_code_bank(const DD3StaticRuntime *rt, uint16_t address);
int dd3_static_fail_unproven(DD3StaticRuntime *rt, int bank, uint16_t pc);
int dd3_static_execute_generated(DD3StaticRuntime *rt, int physical_bank);
#ifdef __cplusplus
}
#endif
#endif
