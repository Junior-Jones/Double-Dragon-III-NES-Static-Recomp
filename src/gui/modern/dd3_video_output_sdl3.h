#ifndef DD3_VIDEO_OUTPUT_SDL3_H
#define DD3_VIDEO_OUTPUT_SDL3_H

#include <windows.h>
#include <stdint.h>
#include <SDL3/SDL.h>

#define DD3_VIDEO_MAX_WIDTH 256
#define DD3_VIDEO_HEIGHT 240
#define DD3_VIDEO_MAX_PIXELS (DD3_VIDEO_MAX_WIDTH * DD3_VIDEO_HEIGHT)

typedef struct DD3VideoOutput {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    uint32_t pixels[DD3_VIDEO_MAX_PIXELS];
    int active_width;
    int active_height;
    int frame_valid;
    int video_initialized;
    int vsync_enabled;
} DD3VideoOutput;

void dd3_video_output_initialize(DD3VideoOutput *output);
int dd3_video_output_open(DD3VideoOutput *output, HWND window, int vsync,
    wchar_t *error, size_t error_capacity);
void dd3_video_output_close(DD3VideoOutput *output);
int dd3_video_output_submit(DD3VideoOutput *output, const uint32_t *bgra,
    int width, int height);
int dd3_video_output_present(DD3VideoOutput *output, int integer_scale,
    int correct_aspect);

#endif
