#include "dd3_frontend_adapter.h"

#include "dd3_core.h"
#include "dd3_rom.h"

#include <stdlib.h>
#include <string.h>

struct DD3FrontendAdapter {
    DD3Rom rom;
    DD3Core *core;
};

static void copy_error(char *output, size_t capacity, const char *message) {
    if (!output || capacity == 0u) return;
    if (!message) message = "unknown frontend adapter error";
    size_t n = strlen(message);
    if (n >= capacity) n = capacity - 1u;
    memcpy(output, message, n);
    output[n] = '\0';
}

int dd3_frontend_adapter_validate_rom(const char *path, char *error, size_t error_capacity) {
    DD3Rom rom;
    char reason[256];
    memset(&rom, 0, sizeof(rom));
    memset(reason, 0, sizeof(reason));
    if (!path || !*path) {
        copy_error(error, error_capacity, "no ROM path was supplied");
        return 0;
    }
    if (!dd3_rom_load(path, &rom, reason, sizeof(reason))) {
        copy_error(error, error_capacity, reason);
        return 0;
    }
    int ok = dd3_rom_is_expected(&rom, reason, sizeof(reason));
    dd3_rom_free(&rom);
    if (!ok) copy_error(error, error_capacity, reason);
    return ok != 0;
}

DD3FrontendAdapter *dd3_frontend_adapter_create(const char *path, char *error, size_t error_capacity) {
    DD3FrontendAdapter *adapter = (DD3FrontendAdapter *)calloc(1u, sizeof(*adapter));
    char reason[256];
    if (!adapter) {
        copy_error(error, error_capacity, "could not allocate frontend adapter");
        return NULL;
    }
    memset(reason, 0, sizeof(reason));
    if (!path || !*path || !dd3_rom_load(path, &adapter->rom, reason, sizeof(reason)) ||
        !dd3_rom_is_expected(&adapter->rom, reason, sizeof(reason))) {
        copy_error(error, error_capacity, reason[0] ? reason : "the selected ROM is not the required Double Dragon III image");
        dd3_rom_free(&adapter->rom);
        free(adapter);
        return NULL;
    }
    adapter->core = dd3_core_create();
    if (!adapter->core) {
        copy_error(error, error_capacity, "could not allocate the Double Dragon III static core");
        dd3_rom_free(&adapter->rom);
        free(adapter);
        return NULL;
    }
    if (!dd3_core_reset(adapter->core, &adapter->rom, reason, sizeof(reason))) {
        copy_error(error, error_capacity, reason);
        dd3_core_destroy(adapter->core);
        dd3_rom_free(&adapter->rom);
        free(adapter);
        return NULL;
    }
    return adapter;
}

void dd3_frontend_adapter_destroy(DD3FrontendAdapter *adapter) {
    if (!adapter) return;
    dd3_core_destroy(adapter->core);
    dd3_rom_free(&adapter->rom);
    free(adapter);
}

int dd3_frontend_adapter_reset(DD3FrontendAdapter *adapter, char *error, size_t error_capacity) {
    if (!adapter || !adapter->core) {
        copy_error(error, error_capacity, "frontend adapter is not running");
        return 0;
    }
    return dd3_core_reset(adapter->core, &adapter->rom, error, error_capacity);
}

int dd3_frontend_adapter_advance_frame(DD3FrontendAdapter *adapter,
                                       uint8_t player1_buttons,
                                       uint8_t player2_buttons,
                                       DD3FrontendFrameResult *result) {
    DD3CoreFrameResult core_result;
    if (!adapter || !adapter->core || !result) return 0;
    memset(&core_result, 0, sizeof(core_result));
    int ok = dd3_core_advance_frame(adapter->core, player1_buttons, player2_buttons, 0u, &core_result);
    memset(result, 0, sizeof(*result));
    result->completed = core_result.completed;
    result->frame_ready = core_result.frame_ready;
    result->pcm_overflowed = core_result.pcm_overflowed;
    result->program_counter = core_result.program_counter;
    result->physical_prg_bank = core_result.physical_prg_bank;
    result->start_frame = core_result.start_frame;
    result->end_frame = core_result.end_frame;
    result->executed_instructions = core_result.executed_instructions;
    result->pcm_available = core_result.pcm_available;
    result->pcm_dropped_total = core_result.pcm_dropped_total;
    result->trap = (int)core_result.trap;
    return ok;
}

int dd3_frontend_adapter_frame_copy_bgra(const DD3FrontendAdapter *adapter,
                                         uint32_t *output,
                                         size_t pixel_capacity,
                                         uint64_t *completed_frame) {
    return adapter && adapter->core &&
           dd3_core_frame_copy_bgra(adapter->core, output, pixel_capacity, completed_frame);
}

size_t dd3_frontend_adapter_audio_available(const DD3FrontendAdapter *adapter) {
    return adapter && adapter->core ? dd3_core_audio_available(adapter->core) : 0u;
}

size_t dd3_frontend_adapter_audio_read(DD3FrontendAdapter *adapter,
                                       int16_t *output,
                                       size_t sample_capacity) {
    return adapter && adapter->core ? dd3_core_audio_read(adapter->core, output, sample_capacity) : 0u;
}

void dd3_frontend_adapter_audio_clear(DD3FrontendAdapter *adapter) {
    if (adapter && adapter->core) dd3_core_audio_clear(adapter->core);
}

int dd3_frontend_adapter_snapshot_save(const DD3FrontendAdapter *adapter,
                                       const char *path,
                                       char *error,
                                       size_t error_capacity) {
    if (!adapter || !adapter->core) {
        copy_error(error, error_capacity, "frontend adapter is not running");
        return 0;
    }
    return dd3_core_snapshot_save(adapter->core, path, error, error_capacity);
}

int dd3_frontend_adapter_snapshot_load(DD3FrontendAdapter *adapter,
                                       const char *path,
                                       char *error,
                                       size_t error_capacity) {
    if (!adapter || !adapter->core) {
        copy_error(error, error_capacity, "frontend adapter is not running");
        return 0;
    }
    return dd3_core_snapshot_load(adapter->core, path, &adapter->rom, error, error_capacity);
}

int dd3_frontend_adapter_status(const DD3FrontendAdapter *adapter, DD3FrontendStatus *status) {
    DD3CoreObservation observation;
    if (!adapter || !adapter->core || !status) return 0;
    memset(&observation, 0, sizeof(observation));
    if (!dd3_core_observe(adapter->core, &observation)) return 0;
    memset(status, 0, sizeof(*status));
    status->frames = observation.frames;
    status->executed_instructions = observation.executed_instructions;
    status->program_counter = observation.program_counter;
    status->physical_prg_bank = observation.physical_prg_bank;
    status->trap = (int)observation.trap;
    status->stopped = observation.stopped;
    return 1;
}

const char *dd3_frontend_adapter_trap_name(int trap) {
    return dd3_core_trap_name((DD3CoreTrap)trap);
}
