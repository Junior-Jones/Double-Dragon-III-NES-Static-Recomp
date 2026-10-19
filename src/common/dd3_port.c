#include "dd3_port.h"

#ifdef DD3_WINDOWS_MINCRT
__declspec(dllimport) int __stdcall CreateDirectoryA(const char *, void *);
__declspec(dllimport) unsigned long __stdcall GetFileAttributesA(const char *);
#define DD3_INVALID_FILE_ATTRIBUTES 0xfffffffful
#define DD3_FILE_ATTRIBUTE_DIRECTORY 0x00000010ul
#endif

int dd3_make_dir(const char *path) {
#ifdef DD3_WINDOWS_MINCRT
    unsigned long attributes;
    if (CreateDirectoryA(path, NULL)) return 1;
    attributes = GetFileAttributesA(path);
    return attributes != DD3_INVALID_FILE_ATTRIBUTES && (attributes & DD3_FILE_ATTRIBUTE_DIRECTORY) != 0;
#elif defined(_WIN32)
    int r = _mkdir(path);
    return (r == 0 || errno == EEXIST) ? 1 : 0;
#else
    int r = mkdir(path, 0775);
    return (r == 0 || errno == EEXIST) ? 1 : 0;
#endif
}

void dd3_join_path(char *out, const char *dir, const char *name) {
    size_t n = strlen(dir);
    size_t i;
    for (i = 0; i < n; ++i) out[i] = dir[i];
    if (n && dir[n - 1] != '/' && dir[n - 1] != '\\') out[n++] = DD3_PATH_SEP;
    while (*name) out[n++] = *name++;
    out[n] = 0;
}

int dd3_parse_u32(const char *text, uint32_t *out) {
    char *end = NULL;
    unsigned long v;
    if (!text || !*text) return 0;
    v = strtoul(text, &end, 0);
    if (!end || *end) return 0;
    *out = (uint32_t)v;
    return 1;
}
