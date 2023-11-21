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

void std_util_memcpy(uint8_t *s, uint8_t *d, size_t size)
{
	memcpy(s, d, size);
}

void std_util_swap_long(long *a, long *b)
{
	long c = *a;
	*a = *b;
	*b = c;
}

void std_util_swap_char(char *a, char *b)
{
	char c = *a;
	*a = *b;
	*b = c;
}