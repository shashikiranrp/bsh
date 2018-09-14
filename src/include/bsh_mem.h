#ifndef BSH_MEM_H
#define BSH_MEM_H

#include <stddef.h>

void* bsh_malloc(size_t);

void* bsh_calloc(int, size_t);

void bsh_free(void*);
#endif
