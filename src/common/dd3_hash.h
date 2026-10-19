#ifndef DD3_HASH_H
#define DD3_HASH_H
#include "dd3_port.h"
void dd3_sha256(const uint8_t *data, size_t len, uint8_t out[32]);
void dd3_hex(const uint8_t *data, size_t len, char *out);
uint32_t dd3_crc32(const uint8_t *data, size_t len);
#endif
