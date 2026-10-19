#ifndef DD3_ROM_H
#define DD3_ROM_H
#include "dd3_port.h"

typedef struct DD3Rom {
    uint8_t *file_data;
    size_t file_size;
    uint8_t *prg;
    uint8_t *chr;
    size_t prg_size;
    size_t chr_size;
    size_t payload_size;
    int mapper;
    int trainer;
    int battery;
    int mirroring_vertical;
    int ines2;
    uint16_t nmi_vector;
    uint16_t reset_vector;
    uint16_t irq_vector;
    char sha256[65];
    uint32_t file_crc32;
    uint32_t payload_crc32;
} DD3Rom;

#define DD3_EXPECTED_FILE_SIZE 262160u
#define DD3_EXPECTED_PRG_SIZE 131072u
#define DD3_EXPECTED_CHR_SIZE 131072u
#define DD3_EXPECTED_MAPPER 4
#define DD3_EXPECTED_NMI_VECTOR 0xFF5Fu
#define DD3_EXPECTED_RESET_VECTOR 0xFF84u
#define DD3_EXPECTED_IRQ_VECTOR 0xE173u
#define DD3_EXPECTED_SHA256 "6a10a2ec6dfc612f2e3b139f12623ac6bf0c1043710c9a56794719cc59f0d32e"
#define DD3_EXPECTED_FILE_CRC32 0x7A6E0454u
#define DD3_EXPECTED_PAYLOAD_CRC32 0x50FD0CC6u

int dd3_rom_load(const char *path, DD3Rom *rom, char *error, size_t error_cap);
void dd3_rom_free(DD3Rom *rom);
int dd3_rom_is_expected(const DD3Rom *rom, char *reason, size_t reason_cap);
#endif
