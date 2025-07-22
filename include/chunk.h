#pragma once

#include "common.h"
#include "value.h"

typedef enum {
  OP_RETURN,
  OP_CONSTANT,

} Opcode;

typedef struct {
  uint8_t *code;
  ValueArray constants;
  int *lines;

} Chunk;

void init_chunk(Chunk *chunk);
void write_chunk(Chunk *chunk, uint8_t byte, int line);
void free_chunk(Chunk *chunk);
int add_constant(Chunk *chunk, Value value);
