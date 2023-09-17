#ifndef __STD_UTIL__
#define __STD_UTIL__

#include <stdio.h>
#include <stdint.h>

void std_util_hexdump(uint8_t *data, size_t size, char *desc);
void std_util_swap(uint8_t *a, uint8_t *b, size_t size);
#endif