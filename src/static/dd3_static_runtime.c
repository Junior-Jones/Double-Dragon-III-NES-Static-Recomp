#include "dd3_static_runtime.h"
#include "dd3_ppu_render.h"

static void copy_text(char *out, size_t cap, const char *text) {
    size_t i = 0;
    if (!out || cap == 0) return;
    while (text && text[i] && i + 1 < cap) { out[i] = text[i]; ++i; }
    out[i] = 0;
}

static uint16_t nt_map(const DD3StaticRuntime *rt, uint16_t address) {
    unsigned value = (unsigned)((address - 0x2000u) & 0x0FFFu);
    unsigned table = value >> 10;
    unsigned inner = value & 0x3FFu;
    unsigned physical = rt->state.mmc3.mirroring_horizontal ? (table >> 1) : (table & 1u);
    return (uint16_t)(physical * 0x400u + inner);
}

static uint8_t ppu_mem_read(DD3StaticRuntime *rt, uint16_t address) {
    address &= 0x3FFFu;
    if (address < 0x2000u) {
        uint16_t bank = dd3_mmc3_map_chr_1k(&rt->state.mmc3, address, (uint16_t)(rt->rom->chr_size / 0x400u));
        size_t offset = (size_t)bank * 0x400u + (address & 0x3FFu);
        return offset < rt->rom->chr_size ? rt->rom->chr[offset] : 0u;
    }
    if (address < 0x3F00u) return rt->state.ppu.nametable[nt_map(rt, (uint16_t)(0x2000u + ((address - 0x2000u) & 0x0FFFu)))];
    address = (uint16_t)((address - 0x3F00u) & 0x1Fu);
    if ((address & 0x13u) == 0x10u) address &= 0x0Fu;
    return rt->state.ppu.palette[address];
}

static void ppu_mem_write(DD3StaticRuntime *rt, uint16_t address, uint8_t value) {
    address &= 0x3FFFu;
    if (address < 0x2000u) return;
    if (address < 0x3F00u) {
        rt->state.ppu.nametable[nt_map(rt, (uint16_t)(0x2000u + ((address - 0x2000u) & 0x0FFFu)))] = value;
        return;
    }
    address = (uint16_t)((address - 0x3F00u) & 0x1Fu);
    if ((address & 0x13u) == 0x10u) address &= 0x0Fu;
    rt->state.ppu.palette[address] = (uint8_t)(value & 0x3Fu);
}


static void ppu_increment_x(DD3StaticPpu *ppu) {
    if ((ppu->v & 0x001Fu) == 31u) {
        ppu->v &= (uint16_t)~0x001Fu;
        ppu->v ^= 0x0400u;
    } else {
        ++ppu->v;
    }
}

static void ppu_increment_y(DD3StaticPpu *ppu) {
    if ((ppu->v & 0x7000u) != 0x7000u) {
        ppu->v += 0x1000u;
    } else {
        unsigned coarse_y;
        ppu->v &= (uint16_t)~0x7000u;
        coarse_y = (ppu->v & 0x03E0u) >> 5;
        if (coarse_y == 29u) {
            coarse_y = 0u;
            ppu->v ^= 0x0800u;
        } else if (coarse_y == 31u) {
            coarse_y = 0u;
        } else {
            ++coarse_y;
        }
        ppu->v = (uint16_t)((ppu->v & ~0x03E0u) | (coarse_y << 5));
    }
}

static void ppu_copy_horizontal(DD3StaticPpu *ppu) {
    ppu->v = (uint16_t)((ppu->v & ~0x041Fu) | (ppu->t & 0x041Fu));
}

static void ppu_copy_vertical(DD3StaticPpu *ppu) {
    ppu->v = (uint16_t)((ppu->v & ~0x7BE0u) | (ppu->t & 0x7BE0u));
}

static uint8_t ppu_pattern_fetch_a12(const DD3StaticPpu *ppu) {
    unsigned dot, phase;
    if (!ppu || !(ppu->mask & 0x18u)) return 0u;
    dot = ppu->dot;
    /* Background fetches: each 8-dot tile fetch reads pattern bytes during
     * the final four dots.  Holding A12 at the selected pattern-table level
     * across both bitplane reads preserves the MMC3 low-time qualification. */
    if ((dot >= 1u && dot <= 256u) || (dot >= 321u && dot <= 336u)) {
        phase = (dot - 1u) & 7u;
        if (phase >= 4u) return (uint8_t)((ppu->ctrl & 0x10u) != 0u);
        return 0u;
    }
    /* Sprite pattern fetches occupy the final four dots of each 8-dot slot.
     * For 8x8 sprites PPUCTRL chooses the table.  For 8x16 sprites the tile
     * number's low bit chooses it; use the corresponding OAM slot for the
     * game's scanline IRQ timing. */
    if (dot >= 257u && dot <= 320u) {
        unsigned rel = dot - 257u;
        phase = rel & 7u;
        if (phase >= 4u) {
            if (ppu->ctrl & 0x20u) {
                unsigned slot = rel >> 3;
                return (uint8_t)((ppu->oam[(slot & 7u) * 4u + 1u] & 1u) != 0u);
            }
            return (uint8_t)((ppu->ctrl & 0x08u) != 0u);
        }
    }
    return 0u;
}

static void ppu_dot(DD3StaticRuntime *rt) {
    DD3StaticPpu *ppu = &rt->state.ppu;
    ++ppu->dot;
    ++rt->ppu_cycles;
    if (ppu->dot >= 341u) {
        ppu->dot = 0u;
        ++ppu->scanline;
        if (ppu->scanline >= 262u) ppu->scanline = 0u;
    }
    if (rt->video_capture_active && ppu->frame == rt->video_capture_frame &&
        ppu->scanline < DD3_SCREEN_HEIGHT && ppu->dot == 1u && rt->video_frame_rgb) {
        DD3PpuScanlineState *line = &rt->video_scanline_state[ppu->scanline];
        line->v = ppu->v;
        line->fine_x = ppu->fine_x;
        line->ctrl = ppu->ctrl;
        line->mask = ppu->mask;
        line->valid = 1u;
        line->mmc3 = rt->state.mmc3;
        if (dd3_ppu_render_scanline(rt, ppu->scanline,
                rt->video_frame_rgb + (size_t)ppu->scanline * DD3_SCREEN_WIDTH * 3u,
                DD3_SCREEN_WIDTH * 3u)) ++rt->video_scanlines_rendered;
    }
    /* Qualified MMC3 A12 transitions from PPU pattern fetches. */
    if (ppu->scanline < 240u || ppu->scanline == 261u) {
        uint8_t a12_high = ppu_pattern_fetch_a12(ppu);
        dd3_mmc3_observe_a12(&rt->state.mmc3, a12_high, 1u);
        if (rt->state.mmc3.irq_pending) rt->irq_pending = 1u;
    } else dd3_mmc3_observe_a12(&rt->state.mmc3, 0u, 1u);
    if ((ppu->mask & 0x18u) && (ppu->scanline < 240u || ppu->scanline == 261u)) {
        if (((ppu->dot >= 8u && ppu->dot <= 256u) ||
             (ppu->dot >= 328u && ppu->dot <= 336u)) &&
            (ppu->dot & 7u) == 0u) ppu_increment_x(ppu);
        if (ppu->dot == 256u) ppu_increment_y(ppu);
        if (ppu->dot == 257u) ppu_copy_horizontal(ppu);
        if (ppu->scanline == 261u && ppu->dot >= 280u && ppu->dot <= 304u)
            ppu_copy_vertical(ppu);
    }
    if (ppu->scanline == 241u && ppu->dot == 1u) {
        ppu->status |= 0x80u;
        if (ppu->ctrl & 0x80u) rt->nmi_pending = 1u;
        if (rt->video_capture_active && ppu->frame == rt->video_capture_frame) {
            rt->video_completed_frame = ppu->frame;
            rt->video_frame_ready = (uint8_t)(rt->video_scanlines_rendered == DD3_SCREEN_HEIGHT);
            rt->video_capture_active = 0u;
        }
        ++ppu->frame;
    } else if (ppu->scanline == 261u && ppu->dot == 1u) {
        ppu->status &= 0x1Fu;
    }
}

static void advance_cycles(DD3StaticRuntime *rt, unsigned cycles) {
    unsigned i;
    rt->cpu_cycles += cycles;
    for (i = 0; i < cycles * 3u; ++i) ppu_dot(rt);
}

static uint16_t vector_read(const DD3StaticRuntime *rt, uint16_t address) {
    size_t base = rt->rom->prg_size - 0x2000u;
    size_t offset = base + (address & 0x1FFFu);
    uint8_t lo = rt->rom->prg[offset];
    uint8_t hi = rt->rom->prg[base + ((address + 1u) & 0x1FFFu)];
    return (uint16_t)(lo | ((uint16_t)hi << 8));
}

int dd3_static_resolve_physical_bank(const DD3StaticRuntime *rt, uint16_t address) {
    uint16_t bank;
    if (!rt || !rt->rom || address < 0x8000u) return -1;
    bank = dd3_mmc3_map_prg_8k(&rt->state.mmc3, address, (uint16_t)(rt->rom->prg_size / 0x2000u));
    return bank == 0xFFFFu ? -1 : (int)bank;
}

int dd3_static_resolve_code_bank(const DD3StaticRuntime *rt, uint16_t address) {
    if (address < 0x2000u) return DD3_STATIC_RAM_CODE_BANK;
    return dd3_static_resolve_physical_bank(rt, address);
}

uint8_t dd3_static_read8(DD3StaticRuntime *rt, uint16_t address) {
    uint8_t value = 0;
    DD3StaticPpu *ppu;
    if (!rt) return 0;
    ++rt->memory_reads;
    ppu = &rt->state.ppu;
    if (address < 0x2000u) value = rt->state.work_ram[address & 0x7FFu];
    else if (address < 0x4000u) {
        uint16_t reg = (uint16_t)(0x2000u | (address & 7u));
        ++rt->ppu_register_reads;
        if (reg == 0x2002u) {
            value = (uint8_t)((ppu->status & 0xE0u) | (ppu->open_bus & 0x1Fu));
            ppu->status &= 0x7Fu;
            ppu->write_toggle = 0u;
            rt->nmi_pending = 0u;
        } else if (reg == 0x2004u) value = ppu->oam[ppu->oam_addr];
        else if (reg == 0x2007u) {
            uint8_t actual = ppu_mem_read(rt, ppu->v);
            if ((ppu->v & 0x3FFFu) >= 0x3F00u) {
                value = actual;
                ppu->read_buffer = ppu_mem_read(rt, (uint16_t)((ppu->v - 0x1000u) & 0x3FFFu));
            } else {
                value = ppu->read_buffer;
                ppu->read_buffer = actual;
            }
            ppu->v = (uint16_t)((ppu->v + ((ppu->ctrl & 4u) ? 32u : 1u)) & 0x7FFFu);
        } else value = ppu->open_bus;
    } else if (address == 0x4015u) value = 0u;
    else if (address == 0x4016u || address == 0x4017u) {
        unsigned port = (unsigned)(address - 0x4016u);
        ++rt->controller_reads[port];
        value = (uint8_t)((rt->controller_shift[port] & 1u) | 0x40u);
        if (!rt->controller_strobe) rt->controller_shift[port] = (uint8_t)((rt->controller_shift[port] >> 1) | 0x80u);
    } else if (address >= 0x6000u && address < 0x8000u) value = rt->state.mmc3.prg_ram_enable ? rt->state.prg_ram[address - 0x6000u] : 0xFFu;
    else if (address >= 0x8000u) {
        int bank = dd3_static_resolve_physical_bank(rt, address);
        size_t offset;
        if (bank >= 0) {
            offset = (size_t)bank * 0x2000u + (address & 0x1FFFu);
            value = offset < rt->rom->prg_size ? rt->rom->prg[offset] : 0u;
        }
    }
    ppu->open_bus = value;
    return value;
}

static void record_apu_event(DD3StaticRuntime *rt, uint16_t address, uint8_t value) {
    DD3ApuEvent *event;
    if (!rt || rt->apu_event_overflow) return;
    if (rt->apu_event_count >= rt->apu_event_capacity) {
        size_t next = rt->apu_event_capacity ? rt->apu_event_capacity * 2u : DD3_APU_EVENT_INITIAL_CAP;
        DD3ApuEvent *grown;
        if (next > DD3_APU_EVENT_HARD_CAP) next = DD3_APU_EVENT_HARD_CAP;
        if (next <= rt->apu_event_capacity) { rt->apu_event_overflow = 1u; return; }
        grown = (DD3ApuEvent *)realloc(rt->apu_events, next * sizeof(*grown));
        if (!grown) { rt->apu_event_overflow = 1u; return; }
        rt->apu_events = grown;
        rt->apu_event_capacity = next;
    }
    event = &rt->apu_events[rt->apu_event_count++];
    event->cpu_cycle = rt->cpu_cycles;
    event->address = address;
    event->value = value;
    memset(event->reserved, 0, sizeof(event->reserved));
}

void dd3_static_write8(DD3StaticRuntime *rt, uint16_t address, uint8_t value) {
    DD3StaticPpu *ppu;
    if (!rt) return;
    ++rt->memory_writes;
    ppu = &rt->state.ppu;
    ppu->open_bus = value;
    if (address < 0x2000u) { rt->state.work_ram[address & 0x7FFu] = value; return; }
    if (address < 0x4000u) {
        uint16_t reg = (uint16_t)(0x2000u | (address & 7u));
        ++rt->ppu_register_writes;
        if (reg == 0x2000u) {
            uint8_t old = ppu->ctrl;
            ppu->ctrl = value;
            ppu->t = (uint16_t)((ppu->t & 0xF3FFu) | ((uint16_t)(value & 3u) << 10));
            if (!(old & 0x80u) && (value & 0x80u) && (ppu->status & 0x80u)) rt->nmi_pending = 1u;
        } else if (reg == 0x2001u) ppu->mask = value;
        else if (reg == 0x2003u) ppu->oam_addr = value;
        else if (reg == 0x2004u) { ppu->oam[ppu->oam_addr] = value; ++ppu->oam_addr; }
        else if (reg == 0x2005u) {
            if (!ppu->write_toggle) {
                ppu->scroll_x = value;
                ppu->fine_x = (uint8_t)(value & 7u);
                ppu->t = (uint16_t)((ppu->t & 0xFFE0u) | (value >> 3));
                ppu->write_toggle = 1u;
            } else {
                ppu->scroll_y = value;
                ppu->t = (uint16_t)((ppu->t & 0x8C1Fu) | ((uint16_t)(value & 7u) << 12) | ((uint16_t)(value & 0xF8u) << 2));
                ppu->write_toggle = 0u;
            }
        } else if (reg == 0x2006u) {
            if (!ppu->write_toggle) {
                ppu->t = (uint16_t)((ppu->t & 0x00FFu) | ((uint16_t)(value & 0x3Fu) << 8));
                ppu->write_toggle = 1u;
            } else {
                ppu->t = (uint16_t)((ppu->t & 0x7F00u) | value);
                ppu->v = ppu->t;
                ppu->write_toggle = 0u;
            }
        } else if (reg == 0x2007u) {
            ppu_mem_write(rt, ppu->v, value);
            ppu->v = (uint16_t)((ppu->v + ((ppu->ctrl & 4u) ? 32u : 1u)) & 0x7FFFu);
        }
        return;
    }
    if (address >= 0x4000u && address <= 0x4017u) {
        if (address == 0x4014u) {
            uint16_t base = (uint16_t)value << 8;
            unsigned i;
            ++rt->oam_dma_count;
            for (i = 0; i < 256u; ++i) ppu->oam[(uint8_t)(ppu->oam_addr + i)] = dd3_static_read8(rt, (uint16_t)(base + i));
            advance_cycles(rt, (unsigned)(513u + (rt->cpu_cycles & 1u)));
        } else if (address == 0x4016u) {
            uint8_t old = rt->controller_strobe;
            rt->controller_strobe = (uint8_t)(value & 1u);
            if (rt->controller_strobe || old) {
                rt->controller_shift[0] = rt->controller_live[0];
                rt->controller_shift[1] = rt->controller_live[1];
                ++rt->controller_latches;
            }
        } else {
            rt->state.apu[address - 0x4000u] = value;
            ++rt->apu_register_writes;
            record_apu_event(rt, address, value);
        }
        return;
    }
    if (address >= 0x6000u && address < 0x8000u) {
        if (rt->state.mmc3.prg_ram_enable && !rt->state.mmc3.prg_ram_write_protect) rt->state.prg_ram[address - 0x6000u] = value;
        return;
    }
    if (address >= 0x8000u) {
        ++rt->mapper_writes;
        dd3_mmc3_cpu_write(&rt->state.mmc3, address, value);
    }
}

uint16_t dd3_static_read16_zp(DD3StaticRuntime *rt, uint8_t address) {
    uint8_t lo = dd3_static_read8(rt, address);
    uint8_t hi = dd3_static_read8(rt, (uint8_t)(address + 1u));
    return (uint16_t)(lo | ((uint16_t)hi << 8));
}
uint16_t dd3_static_read16_jmp_bug(DD3StaticRuntime *rt, uint16_t address) {
    uint8_t lo = dd3_static_read8(rt, address);
    uint8_t hi = dd3_static_read8(rt, (uint16_t)((address & 0xFF00u) | ((address + 1u) & 0x00FFu)));
    return (uint16_t)(lo | ((uint16_t)hi << 8));
}
void dd3_static_push8(DD3StaticRuntime *rt, uint8_t value) { dd3_static_write8(rt, (uint16_t)(0x0100u | rt->state.cpu.s), value); --rt->state.cpu.s; }
uint8_t dd3_static_pop8(DD3StaticRuntime *rt) { ++rt->state.cpu.s; return dd3_static_read8(rt, (uint16_t)(0x0100u | rt->state.cpu.s)); }
void dd3_static_set_nz(DD3StaticRuntime *rt, uint8_t value) { rt->state.cpu.z = (uint8_t)(value == 0u); rt->state.cpu.n = (uint8_t)((value >> 7) & 1u); }
void dd3_static_compare8(DD3StaticRuntime *rt, uint8_t reg, uint8_t value) { uint8_t out = (uint8_t)(reg - value); rt->state.cpu.c = (uint8_t)(reg >= value); dd3_static_set_nz(rt, out); }
uint8_t dd3_static_pack_p(const DD3StaticRuntime *rt, int brk) { const DD3StaticCpu *cpu = &rt->state.cpu; return (uint8_t)((cpu->n << 7) | (cpu->v << 6) | 0x20u | ((brk ? 1u : 0u) << 4) | (cpu->d << 3) | (cpu->i << 2) | (cpu->z << 1) | cpu->c); }
void dd3_static_unpack_p(DD3StaticRuntime *rt, uint8_t p) { DD3StaticCpu *cpu = &rt->state.cpu; cpu->n=(p>>7)&1u;cpu->v=(p>>6)&1u;cpu->d=(p>>3)&1u;cpu->i=(p>>2)&1u;cpu->z=(p>>1)&1u;cpu->c=p&1u; }
int dd3_static_page_crossed(uint16_t first, uint16_t second) { return (first & 0xFF00u) != (second & 0xFF00u); }
int dd3_static_complete(DD3StaticRuntime *rt, unsigned cycles) { ++rt->instructions; ++rt->static_hits; advance_cycles(rt, cycles); return rt->stopped ? 0 : 1; }
int dd3_static_fail_unproven(DD3StaticRuntime *rt, int bank, uint16_t pc) { if (!rt) return 0; rt->last_physical_bank=bank;rt->last_pc=pc;rt->error_code=DD3_STATIC_ERR_UNPROVEN;sprintf(rt->error,"fail-closed: unproven code bank %d PC 0x%04X",bank,pc);rt->stopped=1u;return 0; }

static void interrupt_entry(DD3StaticRuntime *rt, uint16_t vector, int nmi) {
    dd3_static_push8(rt, (uint8_t)(rt->state.cpu.pc >> 8));
    dd3_static_push8(rt, (uint8_t)rt->state.cpu.pc);
    dd3_static_push8(rt, (uint8_t)(dd3_static_pack_p(rt, 0) & ~0x10u));
    rt->state.cpu.i = 1u;
    rt->state.cpu.pc = vector_read(rt, vector);
    advance_cycles(rt, 7u);
    if (nmi) { ++rt->nmi_count; rt->nmi_pending = 0u; }
    else { ++rt->irq_count; rt->irq_pending=0u;rt->state.mmc3.irq_pending=0u; }
}

int dd3_static_runtime_init(DD3StaticRuntime *rt, const DD3Rom *rom, char *error, size_t cap) {
    char why[256];
    if (!rt || !rom) { copy_text(error, cap, "runtime or ROM missing"); return 0; }
    memset(rt, 0, sizeof(*rt));
    rt->apu_event_capacity = DD3_APU_EVENT_INITIAL_CAP;
    rt->apu_events = (DD3ApuEvent *)calloc(rt->apu_event_capacity, sizeof(*rt->apu_events));
    if (!rt->apu_events) { copy_text(error, cap, "out of memory allocating APU event buffer"); return 0; }
    if (!dd3_rom_is_expected(rom, why, sizeof(why))) { free(rt->apu_events); rt->apu_events=NULL; rt->apu_event_capacity=0u; copy_text(error, cap, why); return 0; }
    rt->rom = rom;
    dd3_mmc3_reset(&rt->state.mmc3);
    rt->state.mmc3.prg_ram_enable = 1u;
    rt->state.cpu.s = 0xFDu;
    rt->state.cpu.i = 1u;
    rt->state.cpu.pc = rom->reset_vector;
    rt->state.ppu.scanline = 261u;
    copy_text(error, cap, "PASS");
    return 1;
}


int dd3_static_runtime_request_video_frame(DD3StaticRuntime *rt, uint64_t frame) {
    if (!rt || frame != rt->state.ppu.frame) return 0;
    if (!rt->video_frame_rgb) {
        rt->video_frame_rgb = (uint8_t *)malloc(DD3_SCREEN_WIDTH * DD3_SCREEN_HEIGHT * 3u);
        if (!rt->video_frame_rgb) return 0;
    }
    memset(rt->video_frame_rgb, 0, DD3_SCREEN_WIDTH * DD3_SCREEN_HEIGHT * 3u);
    memset(rt->video_scanline_state, 0, sizeof(rt->video_scanline_state));
    rt->video_capture_frame = frame;
    rt->video_completed_frame = (uint64_t)-1;
    rt->video_scanlines_rendered = 0u;
    rt->video_frame_ready = 0u;
    rt->video_capture_active = 1u;
    return 1;
}

void dd3_static_runtime_release_video_frame(DD3StaticRuntime *rt) {
    if (!rt) return;
    rt->video_frame_ready = 0u;
}

void dd3_static_runtime_destroy(DD3StaticRuntime *rt) {
    if (!rt) return;
    free(rt->apu_events);
    free(rt->video_frame_rgb);
    rt->video_frame_rgb = NULL;
    rt->apu_events = NULL;
    rt->apu_event_count = 0u;
    rt->apu_event_capacity = 0u;
}

int dd3_static_runtime_step(DD3StaticRuntime *rt) {
    int bank;
    if (!rt || rt->stopped) return 0;
    if (rt->nmi_pending) interrupt_entry(rt, 0xFFFAu, 1);
    else if ((rt->irq_pending || rt->state.mmc3.irq_pending) && !rt->state.cpu.i) interrupt_entry(rt, 0xFFFEu, 0);
    bank = dd3_static_resolve_code_bank(rt, rt->state.cpu.pc);
    rt->last_physical_bank = bank;
    rt->last_pc = rt->state.cpu.pc;
    if (bank < 0) return dd3_static_fail_unproven(rt, bank, rt->state.cpu.pc);
    return dd3_static_execute_generated(rt, bank);
}
