#ifndef DD3_AUDIO_OUTPUT_SDL3_H
#define DD3_AUDIO_OUTPUT_SDL3_H

#include <windows.h>
#include <stdint.h>
#include <SDL3/SDL_audio.h>

typedef struct DD3AudioOutput {
    SDL_AudioStream *stream;
    uint32_t target_frames;
    uint64_t queued_frames;
    uint64_t underruns;
    uint32_t queue_depth_frames;
    float playback_ratio;
    int initialized;
    int paused;
    int priming;
    int starved_last_push;
} DD3AudioOutput;

void dd3_audio_output_initialize(DD3AudioOutput *output);
int dd3_audio_output_open(DD3AudioOutput *output,int volume_percent,int latency_ms,
    wchar_t *error,size_t error_capacity);
void dd3_audio_output_close(DD3AudioOutput *output);
void dd3_audio_output_set_volume(DD3AudioOutput *output,int volume_percent);
void dd3_audio_output_pause(DD3AudioOutput *output);
void dd3_audio_output_resume(DD3AudioOutput *output);
void dd3_audio_output_flush(DD3AudioOutput *output);
void dd3_audio_output_push(DD3AudioOutput *output,const int16_t *samples,size_t count);

#endif
