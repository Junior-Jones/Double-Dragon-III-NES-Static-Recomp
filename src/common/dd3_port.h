#ifndef DD3_PORT_H
#define DD3_PORT_H
#ifdef _WIN32
#include <direct.h>
#endif
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#ifdef _WIN32
#define DD3_PATH_SEP '\\'
#else
#define DD3_PATH_SEP '/'
#endif

int dd3_make_dir(const char *path);
void dd3_join_path(char *out, const char *dir, const char *name);
int dd3_parse_u32(const char *text, uint32_t *out);

#endif
