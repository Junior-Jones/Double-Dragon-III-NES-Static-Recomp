#ifndef DD3_PPU_RENDER_H
#define DD3_PPU_RENDER_H
#include "dd3_static_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif
#define DD3_SCREEN_WIDTH 256u
#define DD3_SCREEN_HEIGHT 240u
int dd3_ppu_render_scanline(const DD3StaticRuntime *rt, unsigned y, uint8_t *rgb_line, size_t rgb_size);
int dd3_ppu_render_rgb(const DD3StaticRuntime *rt, uint8_t *rgb, size_t rgb_size);
#ifdef __cplusplus
}
#endif
#endif
