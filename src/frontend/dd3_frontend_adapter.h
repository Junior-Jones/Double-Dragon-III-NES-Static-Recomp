#ifndef DD3_FRONTEND_ADAPTER_H
#define DD3_FRONTEND_ADAPTER_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DD3_FRONTEND_ADAPTER_VERSION "1.0.0"
#define DD3_FRONTEND_PLAYER_COUNT 2u
#define DD3_FRONTEND_BINDING_COUNT 8u
#define DD3_FRONTEND_FRAME_WIDTH 256u
#define DD3_FRONTEND_FRAME_HEIGHT 240u
#define DD3_FRONTEND_FRAME_PIXELS (DD3_FRONTEND_FRAME_WIDTH * DD3_FRONTEND_FRAME_HEIGHT)
#define DD3_FRONTEND_PCM_SAMPLE_RATE 44100u

typedef struct DD3FrontendAdapter DD3FrontendAdapter;

typedef struct DD3FrontendFrameResult {
    uint8_t completed;
    uint8_t frame_ready;
    uint8_t pcm_overflowed;
    uint8_t reserved;
    uint16_t program_counter;
    int16_t physical_prg_bank;
    uint64_t start_frame;
    uint64_t end_frame;
    uint64_t executed_instructions;
    size_t pcm_available;
    uint64_t pcm_dropped_total;
    int trap;
} DD3FrontendFrameResult;

typedef struct DD3FrontendStatus {
    uint64_t frames;
    uint64_t executed_instructions;
    uint16_t program_counter;
    int16_t physical_prg_bank;
    int trap;
    uint8_t stopped;
} DD3FrontendStatus;

/* Thin final host adapter. It owns exactly one opaque DD3Core and one validated
   external ROM image. No private runtime state is exposed to the frontend. */
int dd3_frontend_adapter_validate_rom(const char *path, char *error, size_t error_capacity);
DD3FrontendAdapter *dd3_frontend_adapter_create(const char *path, char *error, size_t error_capacity);
void dd3_frontend_adapter_destroy(DD3FrontendAdapter *adapter);
int dd3_frontend_adapter_reset(DD3FrontendAdapter *adapter, char *error, size_t error_capacity);
int dd3_frontend_adapter_advance_frame(DD3FrontendAdapter *adapter,
                                       uint8_t player1_buttons,
                                       uint8_t player2_buttons,
                                       DD3FrontendFrameResult *result);
int dd3_frontend_adapter_frame_copy_bgra(const DD3FrontendAdapter *adapter,
                                         uint32_t *output,
                                         size_t pixel_capacity,
                                         uint64_t *completed_frame);
size_t dd3_frontend_adapter_audio_available(const DD3FrontendAdapter *adapter);
size_t dd3_frontend_adapter_audio_read(DD3FrontendAdapter *adapter,
                                       int16_t *output,
                                       size_t sample_capacity);
void dd3_frontend_adapter_audio_clear(DD3FrontendAdapter *adapter);
int dd3_frontend_adapter_snapshot_save(const DD3FrontendAdapter *adapter,
                                       const char *path,
                                       char *error,
                                       size_t error_capacity);
int dd3_frontend_adapter_snapshot_load(DD3FrontendAdapter *adapter,
                                       const char *path,
                                       char *error,
                                       size_t error_capacity);
int dd3_frontend_adapter_status(const DD3FrontendAdapter *adapter, DD3FrontendStatus *status);
const char *dd3_frontend_adapter_trap_name(int trap);

#ifdef __cplusplus
}
#endif

#endif
