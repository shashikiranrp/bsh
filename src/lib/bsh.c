#include "bsh_logger.h"
#include "bsh_mem.h"

int main(int arg_count, char *args[]) {
  outs("Welcome to bASIC shELL\n");
  bsh_free(bsh_malloc(1024));
  return 0;
}
