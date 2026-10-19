#include "dd3_audio_output_sdl3.h"
#include "dd3_frontend_adapter.h"
#include <SDL3/SDL.h>
#include <algorithm>
#include <cstring>
#include <iterator>

namespace {
constexpr int kSampleRate=(int)DD3_FRONTEND_PCM_SAMPLE_RATE;
constexpr uint32_t kDriftToleranceMs=3u;
constexpr float kMaximumRateAdjustment=0.0025f;

uint32_t queued_native_frames(DD3AudioOutput *o){
    if(!o||!o->stream)return 0u;
    int bytes=SDL_GetAudioStreamQueued(o->stream);
    return bytes>0?(uint32_t)bytes/sizeof(int16_t):0u;
}

void update_drift_correction(DD3AudioOutput *o){
    if(!o||!o->stream||o->paused||o->priming)return;
    uint32_t tolerance=(uint32_t)kSampleRate*kDriftToleranceMs/1000u;
    float wanted=1.0f;
    if(o->queue_depth_frames>o->target_frames+tolerance)
        wanted=1.0f+kMaximumRateAdjustment;
    else if(o->queue_depth_frames+tolerance<o->target_frames)
        wanted=1.0f-kMaximumRateAdjustment;
    o->playback_ratio+=(wanted-o->playback_ratio)*0.05f;
    o->playback_ratio=std::clamp(o->playback_ratio,
        1.0f-kMaximumRateAdjustment,1.0f+kMaximumRateAdjustment);
    (void)SDL_SetAudioStreamFrequencyRatio(o->stream,o->playback_ratio);
}
}

static void set_error(wchar_t *error,size_t cap,const wchar_t *prefix){
    wchar_t detail[256]={};if(!error||!cap)return;
    MultiByteToWideChar(CP_UTF8,0,SDL_GetError(),-1,detail,(int)std::size(detail));
    _snwprintf(error,cap,L"%s: %s",prefix,detail[0]?detail:L"Unknown SDL audio error");error[cap-1]=0;
}
void dd3_audio_output_initialize(DD3AudioOutput *o){if(o)std::memset(o,0,sizeof(*o));}
int dd3_audio_output_open(DD3AudioOutput *o,int volume,int latency,wchar_t *error,size_t cap){
    if(!o)return 0;dd3_audio_output_close(o);
    if(!SDL_InitSubSystem(SDL_INIT_AUDIO)){set_error(error,cap,L"Unable to initialize SDL audio");return 0;}o->initialized=1;
    SDL_AudioSpec spec{};spec.format=SDL_AUDIO_S16;spec.channels=1;spec.freq=kSampleRate;
    o->stream=SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK,&spec,nullptr,nullptr);
    if(!o->stream){set_error(error,cap,L"Unable to open audio output");dd3_audio_output_close(o);return 0;}
    volume=std::clamp(volume,0,100);latency=std::clamp(latency,20,250);
    SDL_SetAudioStreamGain(o->stream,(float)volume/100.0f);o->target_frames=(uint32_t)((uint64_t)kSampleRate*latency/1000u);
    o->playback_ratio=1.0f;o->paused=1;o->priming=1;return 1;
}
void dd3_audio_output_flush(DD3AudioOutput *o){if(o&&o->stream){SDL_ClearAudioStream(o->stream);o->priming=1;o->starved_last_push=0;o->queue_depth_frames=0u;}}
void dd3_audio_output_close(DD3AudioOutput *o){if(!o)return;if(o->stream)SDL_DestroyAudioStream(o->stream);if(o->initialized)SDL_QuitSubSystem(SDL_INIT_AUDIO);std::memset(o,0,sizeof(*o));}
void dd3_audio_output_set_volume(DD3AudioOutput *o,int volume){if(o&&o->stream){volume=std::clamp(volume,0,100);(void)SDL_SetAudioStreamGain(o->stream,(float)volume/100.0f);}}
void dd3_audio_output_pause(DD3AudioOutput *o){if(!o||!o->stream||o->paused)return;SDL_PauseAudioStreamDevice(o->stream);dd3_audio_output_flush(o);o->paused=1;}
void dd3_audio_output_resume(DD3AudioOutput *o){if(!o||!o->stream||!o->paused)return;dd3_audio_output_flush(o);o->paused=0;}
void dd3_audio_output_push(DD3AudioOutput *o,const int16_t *samples,size_t count){
    if(!o||!o->stream||!samples||!count)return;
    if(SDL_PutAudioStreamData(o->stream,samples,(int)(count*sizeof(int16_t))))
        o->queued_frames+=count;
    o->queue_depth_frames=queued_native_frames(o);
    if(o->priming&&!o->paused&&o->queue_depth_frames>=o->target_frames/2u){if(SDL_ResumeAudioStreamDevice(o->stream))o->priming=0;}
    if(!o->priming&&!o->paused){int starved=o->queue_depth_frames==0u;if(starved&&!o->starved_last_push)o->underruns++;o->starved_last_push=starved;update_drift_correction(o);}
}
