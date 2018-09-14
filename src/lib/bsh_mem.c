#include "bsh_mem.h"
#include <stdlib.h>

void* bsh_malloc(size_t size) {
  return malloc(size);
}

void* bsh_calloc(int count, size_t size) {
  return calloc(count, size);
}

void bsh_free(void* ptr) {
  free(ptr);
}


