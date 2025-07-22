/*chunk.c*/
#include "chunk.h"

void init_chunk(Chunk *chunk) {
  chunk->code = NULL;
  chunk->lines = NULL;
  init_valuearray(&chunk->constants);
}

void write_chunk(Chunk *chunk, uint8_t byte, int line) {
  arrput(chunk->code, byte);
  arrput(chunk->lines, line);
}

void free_chunk(Chunk *chunk) {
  arrfree(chunk->code);
  arrfree(chunk->lines);
  init_chunk(chunk);
  free_valuearray(&chunk->constants);
}
int add_constant(Chunk *chunk, Value value) {
  write_valuearray(&chunk->constants, value);
  return arrlen(chunk->constants.values) - 1;
}