#include "std_util.h"

void std_util_hexdump(uint8_t *data, size_t size, char *desc)
{
	for (size_t i = 0; i < size; ++i)
		printf("%X", data[i]);
}

void std_util_swap(uint8_t *a, uint8_t *b, size_t size)
{
	memcpy(a, b, size);
	memcpy(b, a, size);
}

int std_util_print(char *s)
{
	printf("Your message: %s",s);
	return 0;
}