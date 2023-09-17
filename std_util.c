#include "std_util.h"

void std_util_hexdump(uint8_t *data, size_t size, char *desc)
{
	for (size_t i = 0; i < size; ++i)
		printf("%X", data[i]);
}