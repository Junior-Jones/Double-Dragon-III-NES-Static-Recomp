#ifndef DD3_CORE_H
#define DD3_CORE_H

#include "dd3_rom.h"
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DD3_CORE_VERSION "1.0.0"
#define DD3_CORE_FRAME_WIDTH 256u
#define DD3_CORE_FRAME_HEIGHT 240u
#define DD3_CORE_FRAME_PIXELS (DD3_CORE_FRAME_WIDTH * DD3_CORE_FRAME_HEIGHT)
#define DD3_CORE_FRAME_BGRA_BYTES (DD3_CORE_FRAME_PIXELS * 4u)
#define DD3_CORE_PCM_SAMPLE_RATE 44100u
#define DD3_CORE_PCM_CAPACITY 4096u
#define DD3_CORE_DEFAULT_FRAME_INSTRUCTION_LIMIT 1000000u
#define DD3_CORE_GENERATED_CONTEXT_COUNT 20166u

typedef struct DD3Core DD3Core;

typedef enum DD3CoreTrap {
    DD3_CORE_TRAP_NONE = 0,
    DD3_CORE_TRAP_BAD_ROM = 1,
    DD3_CORE_TRAP_MISSING_IDENTITY = 2,
    DD3_CORE_TRAP_STEP_LIMIT = 3,
    DD3_CORE_TRAP_APU_OUTPUT = 4,
    DD3_CORE_TRAP_UNSUPPORTED_MAPPER_STATE = 5,
    DD3_CORE_TRAP_UNPROVEN_INDIRECT = 6,
    DD3_CORE_TRAP_UNKNOWN_RAM_EPOCH = 7,
    DD3_CORE_TRAP_STATE_TRANSFER = 8,
    DD3_CORE_TRAP_FRAME_OUTPUT = 9
} DD3CoreTrap;

enum {
    DD3_BUTTON_A      = 0x01u,
    DD3_BUTTON_B      = 0x02u,
    DD3_BUTTON_SELECT = 0x04u,
    DD3_BUTTON_START  = 0x08u,
    DD3_BUTTON_UP     = 0x10u,
    DD3_BUTTON_DOWN   = 0x20u,
    DD3_BUTTON_LEFT   = 0x40u,
    DD3_BUTTON_RIGHT  = 0x80u
};

typedef struct DD3CoreFrameResult {
    uint8_t completed;
    uint8_t stopped;
    uint8_t player1_buttons;
    uint8_t player2_buttons;
    uint8_t frame_ready;
    uint8_t pcm_overflowed;
    uint16_t program_counter;
    int16_t physical_prg_bank;
    uint16_t reserved;
    uint64_t start_frame;
    uint64_t end_frame;
    uint64_t executed_instructions;
    size_t pcm_available;
    uint64_t pcm_dropped_total;
    DD3CoreTrap trap;
} DD3CoreFrameResult;


typedef struct DD3CoreObservation {
    DD3CoreTrap trap;
    uint16_t program_counter;
    int16_t physical_prg_bank;
    uint16_t last_program_counter;
    int16_t last_physical_prg_bank;
    uint32_t runtime_error_code;
    uint64_t executed_instructions;
    uint64_t static_hits;
    uint64_t cpu_cycles;
    uint64_t ppu_cycles;
    uint64_t frames;
    uint64_t nmi_count;
    uint64_t irq_count;
    uint64_t mapper_writes;
    uint64_t apu_register_writes;
    uint64_t controller_reads[2];
    uint64_t controller_latches;
    uint64_t controller_active_frames[2];
    size_t apu_event_count;
    size_t pcm_available;
    uint64_t pcm_dropped_total;
    uint64_t dmc_fetches;
    uint64_t dmc_stall_cycles;
    uint64_t dmc_oam_collision_fetches;
    uint64_t dmc_output_clocks;
    uint64_t sweep_clocks;
    uint64_t quarter_frame_clocks;
    uint64_t half_frame_clocks;
    uint64_t frame_irq_assertions;
    uint64_t interrupt_entries;
    uint64_t nmi_priority_wins;
    uint64_t copied_frame_number;
    uint8_t current_player1_buttons;
    uint8_t current_player2_buttons;
    uint8_t stopped;
    uint8_t apu_event_overflow;
    uint8_t ram_code_valid;
    uint8_t copied_frame_valid;
    uint8_t pcm_overflowed;
    uint8_t dmc_irq_flag;
    uint8_t dmc_output_level;
    uint8_t frame_irq_flag;
    uint8_t five_step_mode;
    uint8_t frame_irq_inhibit;
    uint8_t reserved_u10;
    uint16_t dmc_current_address;
    uint16_t dmc_bytes_remaining;
    uint64_t pulse_timer_clocks[2];
    uint64_t triangle_timer_clocks;
    uint64_t noise_timer_clocks;
    uint64_t mixer_transitions;
    uint64_t pcm_samples_emitted;
    uint16_t apu_mixer_level;
    uint16_t noise_lfsr;
    uint8_t pulse_duty_step[2];
    uint8_t triangle_sequence_step;
    uint8_t triangle_dac_output;
    uint8_t pulse_length_counter[2];
    uint8_t triangle_length_counter;
    uint8_t noise_length_counter;
    /* U12 PPU timing observations append without changing earlier fields. */
    uint64_t ppu_evaluated_scanlines;
    uint64_t ppu_sprite_overflow_events;
    uint64_t ppu_sprite_zero_hits;
    uint16_t ppu_current_sprite_zero_hit_dot;
    uint8_t ppu_sprite_overflow_latched;
    uint8_t reserved_u12;
} DD3CoreObservation;

DD3Core *dd3_core_create(void);
void dd3_core_destroy(DD3Core *core);
int dd3_core_reset(DD3Core *core, const DD3Rom *rom, char *error, size_t error_capacity);

/* U03 ordinary execution boundary. The two masks are latched for exactly the
   frame being advanced. instruction_limit==0 selects the documented default.
   The call stops only at the next PPU frame boundary or at an existing
   fail-closed core trap. It never discovers or admits new code identities. */
int dd3_core_advance_frame(DD3Core *core,
                           uint8_t player1_buttons,
                           uint8_t player2_buttons,
                           uint64_t instruction_limit,
                           DD3CoreFrameResult *result);

/* Copies the last completed 256x240 frame. Each uint32_t is 0xAARRGGBB;
   little-endian memory therefore presents BGRA bytes to host graphics APIs. */
int dd3_core_frame_copy_bgra(const DD3Core *core, uint32_t *output, size_t pixel_capacity,
                             uint64_t *completed_frame);

/* Bounded mono PCM16 consumer queue. On overflow the oldest queued sample is
   dropped, the new sample is retained, and pcm_dropped_total increments. An
   underflow read simply returns the number actually available (possibly zero).
   Host reads/clears never advance emulated time. */
size_t dd3_core_audio_available(const DD3Core *core);
size_t dd3_core_audio_read(DD3Core *core, int16_t *output, size_t sample_capacity);
void dd3_core_audio_clear(DD3Core *core);


DD3CoreTrap dd3_core_trap(const DD3Core *core);
const char *dd3_core_trap_name(DD3CoreTrap trap);
int dd3_core_error_copy(const DD3Core *core, char *output, size_t output_capacity);
int dd3_core_observe(const DD3Core *core, DD3CoreObservation *observation);
/* Versioned snapshots check ROM identity, generated core identity and payload SHA-256
 * before importing runtime state. This format is scoped to the Windows x64 build. */
int dd3_core_snapshot_save(const DD3Core *core, const char *path,
                           char *error, size_t error_capacity);
int dd3_core_snapshot_load(DD3Core *core, const char *path, const DD3Rom *rom,
                           char *error, size_t error_capacity);

#ifdef __cplusplus
}
#endif
#endif


