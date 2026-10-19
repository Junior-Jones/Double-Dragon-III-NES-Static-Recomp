#include "dd3_rom.h"
#include "dd3_hash.h"

static void seterr(char *out, size_t cap, const char *msg) {
    size_t i = 0;
    if (!out || cap == 0) return;
    while (msg && msg[i] && i + 1 < cap) { out[i] = msg[i]; ++i; }
    out[i] = 0;
}

int dd3_rom_load(const char *path, DD3Rom *rom, char *error, size_t error_cap) {
    FILE *file;
    long length;
    size_t got, offset;
    uint8_t digest[32];
    if (!rom || !path) { seterr(error, error_cap, "ROM path or output is missing"); return 0; }
    memset(rom, 0, sizeof(*rom));
    file = fopen(path, "rb");
    if (!file) { seterr(error, error_cap, "cannot open ROM"); return 0; }
    if (fseek(file, 0, SEEK_END) != 0 || (length = ftell(file)) < 16 || fseek(file, 0, SEEK_SET) != 0) {
        fclose(file); seterr(error, error_cap, "cannot size ROM"); return 0;
    }
    rom->file_data = (uint8_t *)malloc((size_t)length);
    if (!rom->file_data) { fclose(file); seterr(error, error_cap, "out of memory"); return 0; }
    got = fread(rom->file_data, 1, (size_t)length, file);
    fclose(file);
    if (got != (size_t)length) { dd3_rom_free(rom); seterr(error, error_cap, "short ROM read"); return 0; }
    rom->file_size = (size_t)length;
    if (memcmp(rom->file_data, "NES\x1a", 4) != 0) { dd3_rom_free(rom); seterr(error, error_cap, "not an iNES ROM"); return 0; }
    rom->trainer = (rom->file_data[6] & 0x04u) ? 1 : 0;
    rom->battery = (rom->file_data[6] & 0x02u) ? 1 : 0;
    rom->mapper = (int)(rom->file_data[6] >> 4) | (int)(rom->file_data[7] & 0xF0u);
    rom->mirroring_vertical = (rom->file_data[6] & 1u) ? 1 : 0;
    rom->ines2 = ((rom->file_data[7] & 0x0Cu) == 0x08u) ? 1 : 0;
    if (rom->ines2) { dd3_rom_free(rom); seterr(error, error_cap, "NES 2.0 headers are not accepted by this Version 01 audit"); return 0; }
    rom->prg_size = (size_t)rom->file_data[4] * 16384u;
    rom->chr_size = (size_t)rom->file_data[5] * 8192u;
    offset = 16u + (rom->trainer ? 512u : 0u);
    if (offset + rom->prg_size + rom->chr_size > rom->file_size) {
        dd3_rom_free(rom); seterr(error, error_cap, "truncated PRG/CHR payload"); return 0;
    }
    rom->prg = rom->file_data + offset;
    rom->chr = rom->prg + rom->prg_size;
    rom->payload_size = rom->prg_size + rom->chr_size;
    if (rom->prg_size < 6u) { dd3_rom_free(rom); seterr(error, error_cap, "PRG too small for vectors"); return 0; }
    rom->nmi_vector = (uint16_t)(rom->prg[rom->prg_size - 6u] | ((uint16_t)rom->prg[rom->prg_size - 5u] << 8));
    rom->reset_vector = (uint16_t)(rom->prg[rom->prg_size - 4u] | ((uint16_t)rom->prg[rom->prg_size - 3u] << 8));
    rom->irq_vector = (uint16_t)(rom->prg[rom->prg_size - 2u] | ((uint16_t)rom->prg[rom->prg_size - 1u] << 8));
    dd3_sha256(rom->file_data, rom->file_size, digest);
    dd3_hex(digest, 32u, rom->sha256);
    rom->file_crc32 = dd3_crc32(rom->file_data, rom->file_size);
    rom->payload_crc32 = dd3_crc32(rom->prg, rom->payload_size);
    seterr(error, error_cap, "PASS");
    return 1;
}

void dd3_rom_free(DD3Rom *rom) {
    if (rom && rom->file_data) free(rom->file_data);
    if (rom) memset(rom, 0, sizeof(*rom));
}

int dd3_rom_is_expected(const DD3Rom *rom, char *reason, size_t cap) {
    if (!rom) { seterr(reason, cap, "ROM data is missing"); return 0; }
    if (strcmp(rom->sha256, DD3_EXPECTED_SHA256) != 0) { seterr(reason, cap, "full-file SHA-256 does not match Double Dragon III (USA)"); return 0; }
    if (rom->file_crc32 != DD3_EXPECTED_FILE_CRC32) { seterr(reason, cap, "full-file CRC32 mismatch"); return 0; }
    if (rom->payload_crc32 != DD3_EXPECTED_PAYLOAD_CRC32) { seterr(reason, cap, "PRG+CHR payload CRC32 mismatch"); return 0; }
    if (rom->file_size != DD3_EXPECTED_FILE_SIZE) { seterr(reason, cap, "unexpected file size"); return 0; }
    if (rom->mapper != DD3_EXPECTED_MAPPER) { seterr(reason, cap, "ROM is not mapper 4/MMC3"); return 0; }
    if (rom->prg_size != DD3_EXPECTED_PRG_SIZE || rom->chr_size != DD3_EXPECTED_CHR_SIZE) { seterr(reason, cap, "unexpected PRG or CHR size"); return 0; }
    if (rom->trainer || rom->battery || rom->mirroring_vertical) { seterr(reason, cap, "trainer, battery, or mirroring flags do not match expected ROM"); return 0; }
    if (rom->nmi_vector != DD3_EXPECTED_NMI_VECTOR || rom->reset_vector != DD3_EXPECTED_RESET_VECTOR || rom->irq_vector != DD3_EXPECTED_IRQ_VECTOR) {
        seterr(reason, cap, "interrupt vectors do not match expected ROM"); return 0;
    }
    seterr(reason, cap, "exact expected Double Dragon III - The Sacred Stones (USA) ROM");
    return 1;
}
