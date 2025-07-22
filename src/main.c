#include <stdio.h>
#include "common.h"
#include "chunk.h"
#include "debug.h"

int main() {
  Chunk chunk;
  init_chunk(&chunk);
  int index = add_constant(&chunk, 3.14);
  write_chunk(&chunk, OP_CONSTANT, 123);
  write_chunk(&chunk, (uint8_t)index, 123);
  write_chunk(&chunk, OP_RETURN, 123);
  disassemble_chunk(&chunk, "test chunk");
  free_chunk(&chunk);
  return 0;
}
