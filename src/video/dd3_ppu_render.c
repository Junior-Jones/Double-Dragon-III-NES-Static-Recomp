#include "dd3_ppu_render.h"

static const uint8_t NES_RGB[64][3] = {
 {84,84,84},{0,30,116},{8,16,144},{48,0,136},{68,0,100},{92,0,48},{84,4,0},{60,24,0},{32,42,0},{8,58,0},{0,64,0},{0,60,0},{0,50,60},{0,0,0},{0,0,0},{0,0,0},
 {152,150,152},{8,76,196},{48,50,236},{92,30,228},{136,20,176},{160,20,100},{152,34,32},{120,60,0},{84,90,0},{40,114,0},{8,124,0},{0,118,40},{0,102,120},{0,0,0},{0,0,0},{0,0,0},
 {236,238,236},{76,154,236},{120,124,236},{176,98,236},{228,84,236},{236,88,180},{236,106,100},{212,136,32},{160,170,0},{116,196,0},{76,208,32},{56,204,108},{56,180,204},{60,60,60},{0,0,0},{0,0,0},
 {236,238,236},{168,204,236},{188,188,236},{212,178,236},{236,174,236},{236,174,212},{236,180,176},{228,196,144},{204,210,120},{180,222,120},{168,226,144},{152,226,180},{160,214,228},{160,162,160},{0,0,0},{0,0,0}
};

static void set_error(char *out,size_t cap,const char *text){size_t i=0;if(!out||!cap)return;while(text&&text[i]&&i+1<cap){out[i]=text[i];i++;}out[i]=0;}
static uint16_t map_nt_mirroring(uint8_t horizontal,unsigned table,unsigned inner){unsigned physical=horizontal?(table>>1):(table&1u);return (uint16_t)(physical*0x400u+(inner&0x3ffu));}
static uint8_t nt_read_mirroring(const DD3StaticRuntime *rt,uint8_t horizontal,unsigned table,unsigned inner){return rt->state.ppu.nametable[map_nt_mirroring(horizontal,table,inner)];}
static uint8_t chr_read_mmc3(const DD3StaticRuntime *rt,const DD3Mmc3 *mmc3,uint16_t address){uint16_t bank=dd3_mmc3_map_chr_1k(mmc3,address,(uint16_t)(rt->rom->chr_size/0x400u));size_t off=(size_t)bank*0x400u+(address&0x3ffu);return off<rt->rom->chr_size?rt->rom->chr[off]:0u;}
static uint8_t palette_entry(const DD3StaticRuntime *rt,unsigned index){index&=0x1fu;if((index&0x13u)==0x10u)index&=0x0fu;return rt->state.ppu.palette[index]&0x3fu;}
static void local_increment_x(uint16_t *v){if((*v&0x001fu)==31u){*v&=(uint16_t)~0x001fu;*v^=0x0400u;}else ++*v;}
static void local_decrement_x(uint16_t *v){
 unsigned coarse=(unsigned)(*v&0x001fu);
 if(coarse==0u){*v=(uint16_t)((*v&~0x001fu)|31u);*v^=0x0400u;}else *v=(uint16_t)(*v-1u);
}
static uint16_t visible_scanline_origin(uint16_t pipeline_v){
 /* At dot 1 the PPU has already fetched two background tiles during dots
  * 321-336 of the preceding scanline.  The live v register therefore points
  * two coarse-X cells ahead of the tile currently leaving the shifters at
  * screen pixel zero.  Rewind only horizontal state; vertical/fine-Y state
  * already describes the visible scanline. */
 local_decrement_x(&pipeline_v);local_decrement_x(&pipeline_v);return pipeline_v;
}

int dd3_ppu_render_scanline(const DD3StaticRuntime *rt,unsigned y,uint8_t *rgb,size_t rgb_size){
 const DD3PpuScanlineState *line;DD3PpuScanlineState fallback;uint8_t bg_opaque[DD3_SCREEN_WIDTH];unsigned x;uint16_t render_v;
 if(!rt||!rt->rom||!rgb||y>=DD3_SCREEN_HEIGHT||rgb_size<DD3_SCREEN_WIDTH*3u)return 0;
 /* Consumer CRT/NTSC safe area: the game leaves unstable nametable data in
  * the final eight PPU scanlines, which period displays hide in vertical
  * overscan. Preserve the captured raw scanline state for diagnostics, but
  * present a clean display frame like contemporary emulator frontends. */
 if(y>=DD3_SCREEN_HEIGHT-8u){memset(rgb,0,DD3_SCREEN_WIDTH*3u);return 1;}
 line=&rt->video_scanline_state[y];
 if(!line->valid){memset(&fallback,0,sizeof(fallback));fallback.v=rt->state.ppu.v;fallback.fine_x=rt->state.ppu.fine_x;fallback.ctrl=rt->state.ppu.ctrl;fallback.mask=rt->state.ppu.mask;fallback.mmc3=rt->state.mmc3;fallback.valid=1u;line=&fallback;}
 memset(bg_opaque,0,sizeof(bg_opaque));render_v=visible_scanline_origin(line->v);
 for(x=0;x<DD3_SCREEN_WIDTH;x++){
  unsigned pi=x;uint8_t nes=palette_entry(rt,0u);uint8_t opaque=0u;unsigned sub=(unsigned)line->fine_x+x;
  if(x&&((sub&7u)==0u))local_increment_x(&render_v);
  if((line->mask&0x08u)&&(!(x<8u)||(line->mask&0x02u))){
   unsigned table=(render_v>>10)&3u,tx=render_v&31u,ty=(render_v>>5)&31u,row=(render_v>>12)&7u,bit=7u-(sub&7u);
   uint8_t tile=nt_read_mirroring(rt,line->mmc3.mirroring_horizontal,table,ty*32u+tx);
   uint8_t attr=nt_read_mirroring(rt,line->mmc3.mirroring_horizontal,table,0x3c0u+(ty>>2)*8u+(tx>>2));
   unsigned shift=((ty&2u)?4u:0u)+((tx&2u)?2u:0u),pal=(attr>>shift)&3u;
   uint16_t pa=(uint16_t)(((line->ctrl&0x10u)?0x1000u:0u)+(uint16_t)tile*16u+row);
   unsigned c=((chr_read_mmc3(rt,&line->mmc3,pa)>>bit)&1u)|(((chr_read_mmc3(rt,&line->mmc3,(uint16_t)(pa+8u))>>bit)&1u)<<1);
   if(c){nes=palette_entry(rt,pal*4u+c);opaque=1u;}
  }
  bg_opaque[pi]=opaque;rgb[pi*3u]=NES_RGB[nes][0];rgb[pi*3u+1u]=NES_RGB[nes][1];rgb[pi*3u+2u]=NES_RGB[nes][2];
 }
 if(line->mask&0x10u){
  int si;
  for(si=63;si>=0;--si){
   const uint8_t *o=&rt->state.ppu.oam[si*4];int top=(int)o[0]+1;uint8_t tile=o[1],attr=o[2];int left=o[3];unsigned h=(line->ctrl&0x20u)?16u:8u;
   unsigned py=(unsigned)((int)y-top),px;
   if((int)y<top||py>=h)continue;
   for(px=0;px<8u;px++){
    int dx=left+(int)px;unsigned row=py,bit=7u-px;uint16_t base;uint8_t st=tile;unsigned c,pi;uint8_t nes;
    if(dx<0||dx>=256)continue;if(dx<8&&!(line->mask&0x04u))continue;
    if(attr&0x80u)row=h-1u-row;if(attr&0x40u)bit=px;
    if(h==16u){base=(tile&1u)?0x1000u:0u;st=(uint8_t)(tile&0xfeu);if(row>=8u){st++;row-=8u;}}
    else base=(line->ctrl&0x08u)?0x1000u:0u;
    {uint16_t pa=(uint16_t)(base+(uint16_t)st*16u+row);c=((chr_read_mmc3(rt,&line->mmc3,pa)>>bit)&1u)|(((chr_read_mmc3(rt,&line->mmc3,(uint16_t)(pa+8u))>>bit)&1u)<<1);}
    if(!c)continue;pi=(unsigned)dx;if((attr&0x20u)&&bg_opaque[pi])continue;
    nes=palette_entry(rt,0x10u+(attr&3u)*4u+c);rgb[pi*3u]=NES_RGB[nes][0];rgb[pi*3u+1u]=NES_RGB[nes][1];rgb[pi*3u+2u]=NES_RGB[nes][2];
   }
  }
 }
 return 1;
}

int dd3_ppu_render_rgb(const DD3StaticRuntime *rt,uint8_t *rgb,size_t rgb_size){
 unsigned y;
 if(!rt||!rgb||rgb_size<DD3_SCREEN_WIDTH*DD3_SCREEN_HEIGHT*3u)return 0;
 for(y=0;y<DD3_SCREEN_HEIGHT;y++)if(!dd3_ppu_render_scanline(rt,y,rgb+(size_t)y*DD3_SCREEN_WIDTH*3u,DD3_SCREEN_WIDTH*3u))return 0;
 return 1;
}
