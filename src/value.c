/*value.c*/
#include <stdio.h>

#include "value.h"

void init_valuearray(ValueArray *array) { array->values = NULL; }
void write_valuearray(ValueArray *array, Value value) {
  arrput(array->values, value);
}
void free_valuearray(ValueArray *array) {
  arrfree(array->values);
  init_valuearray(array);
}

void print_value(Value value) { printf("%g", value); }
