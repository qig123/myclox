/*value.h*/
#pragma once

#include "common.h"
#include "stb_ds.h"

typedef double Value;

typedef struct {
  Value *values;
} ValueArray;

void init_valuearray(ValueArray *array);
void write_valuearray(ValueArray *array, Value value);
void free_valuearray(ValueArray *array);
void print_value(Value value);
