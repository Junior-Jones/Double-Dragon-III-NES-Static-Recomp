#ifndef DD3_MMC3_H
#define DD3_MMC3_H
#include "dd3_port.h"

typedef struct DD3Mmc3 {
    uint8_t bank_select;
    uint8_t bank_registers[8];
    uint8_t prg_mode;
    uint8_t chr_mode;
    uint8_t mirroring_horizontal;
    uint8_t prg_ram_enable;
    uint8_t prg_ram_write_protect;
    uint8_t irq_latch;
    uint8_t irq_counter;
    uint8_t irq_reload;
    uint8_t irq_enabled;
    uint8_t irq_pending;
    uint8_t a12_last;
    uint16_t a12_low_dots;
} DD3Mmc3;

void dd3_mmc3_reset(DD3Mmc3 *mmc3);
void dd3_mmc3_cpu_write(DD3Mmc3 *mmc3, uint16_t address, uint8_t value);
uint16_t dd3_mmc3_map_prg_8k(const DD3Mmc3 *mmc3, uint16_t address, uint16_t bank_count);
uint16_t dd3_mmc3_map_chr_1k(const DD3Mmc3 *mmc3, uint16_t address, uint16_t bank_count);
void dd3_mmc3_clock_irq(DD3Mmc3 *mmc3);
void dd3_mmc3_observe_a12(DD3Mmc3 *mmc3, uint8_t a12_high, uint16_t elapsed_ppu_dots);
#endif
