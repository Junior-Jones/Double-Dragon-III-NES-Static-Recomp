#include "dd3_mmc3.h"


static uint16_t norm_bank(uint16_t bank, uint16_t count) {
    return count ? (uint16_t)(bank % count) : 0u;
}

void dd3_mmc3_reset(DD3Mmc3 *m) {
    if (!m) return;
    memset(m, 0, sizeof(*m));
    m->bank_registers[6] = 0u;
    m->bank_registers[7] = 1u;
}

void dd3_mmc3_cpu_write(DD3Mmc3 *m, uint16_t address, uint8_t value) {
    if (!m || address < 0x8000u) return;
    switch (address & 0xE001u) {
        case 0x8000u:
            m->bank_select = (uint8_t)(value & 7u);
            m->prg_mode = (uint8_t)((value >> 6) & 1u);
            m->chr_mode = (uint8_t)((value >> 7) & 1u);
            break;
        case 0x8001u:
            m->bank_registers[m->bank_select & 7u] = value;
            break;
        case 0xA000u:
            m->mirroring_horizontal = (uint8_t)(value & 1u);
            break;
        case 0xA001u:
            m->prg_ram_enable = (uint8_t)((value >> 7) & 1u);
            m->prg_ram_write_protect = (uint8_t)((value >> 6) & 1u);
            break;
        case 0xC000u:
            m->irq_latch = value;
            break;
        case 0xC001u:
            m->irq_reload = 1u;
            break;
        case 0xE000u:
            m->irq_enabled = 0u;
            m->irq_pending = 0u;
            break;
        case 0xE001u:
            m->irq_enabled = 1u;
            break;
        default:
            break;
    }
}

uint16_t dd3_mmc3_map_prg_8k(const DD3Mmc3 *m, uint16_t address, uint16_t bank_count) {
    uint16_t last, second_last, r6, r7;
    if (!m || bank_count < 2u || address < 0x8000u) return 0xFFFFu;
    last = (uint16_t)(bank_count - 1u);
    second_last = (uint16_t)(bank_count - 2u);
    r6 = norm_bank((uint16_t)(m->bank_registers[6] & 0x3Fu), bank_count);
    r7 = norm_bank((uint16_t)(m->bank_registers[7] & 0x3Fu), bank_count);
    if (address < 0xA000u) return m->prg_mode ? second_last : r6;
    if (address < 0xC000u) return r7;
    if (address < 0xE000u) return m->prg_mode ? r6 : second_last;
    return last;
}

uint16_t dd3_mmc3_map_chr_1k(const DD3Mmc3 *m, uint16_t address, uint16_t bank_count) {
    uint16_t slot, bank;
    if (!m || bank_count == 0u || address >= 0x2000u) return 0xFFFFu;
    slot = (uint16_t)(address >> 10);
    if (!m->chr_mode) {
        switch (slot) {
            case 0u: bank = (uint16_t)(m->bank_registers[0] & 0xFEu); break;
            case 1u: bank = (uint16_t)((m->bank_registers[0] & 0xFEu) + 1u); break;
            case 2u: bank = (uint16_t)(m->bank_registers[1] & 0xFEu); break;
            case 3u: bank = (uint16_t)((m->bank_registers[1] & 0xFEu) + 1u); break;
            default: bank = m->bank_registers[slot - 2u]; break;
        }
    } else {
        switch (slot) {
            case 0u: case 1u: case 2u: case 3u: bank = m->bank_registers[slot + 2u]; break;
            case 4u: bank = (uint16_t)(m->bank_registers[0] & 0xFEu); break;
            case 5u: bank = (uint16_t)((m->bank_registers[0] & 0xFEu) + 1u); break;
            case 6u: bank = (uint16_t)(m->bank_registers[1] & 0xFEu); break;
            default: bank = (uint16_t)((m->bank_registers[1] & 0xFEu) + 1u); break;
        }
    }
    return norm_bank(bank, bank_count);
}

void dd3_mmc3_clock_irq(DD3Mmc3 *m) {
    if (!m) return;
    if (m->irq_counter == 0u || m->irq_reload) {
        m->irq_counter = m->irq_latch;
        m->irq_reload = 0u;
    } else {
        --m->irq_counter;
    }
    if (m->irq_counter == 0u && m->irq_enabled) m->irq_pending = 1u;
}

void dd3_mmc3_observe_a12(DD3Mmc3 *m, uint8_t a12_high, uint16_t elapsed_ppu_dots) {
    uint32_t low;
    if (!m) return;
    if (!a12_high) {
        low = (uint32_t)m->a12_low_dots + elapsed_ppu_dots;
        m->a12_low_dots = (uint16_t)(low > 0xFFFFu ? 0xFFFFu : low);
        m->a12_last = 0u;
        return;
    }
    if (!m->a12_last && m->a12_low_dots >= 8u) dd3_mmc3_clock_irq(m);
    m->a12_last = 1u;
    m->a12_low_dots = 0u;
}
