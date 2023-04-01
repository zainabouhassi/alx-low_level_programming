#include "main.h"
#include <stdlib.h>

/**
* print_binary - prints the binary representation of a number
* @args: the number to print
* @format: format struct
* @count: pointer to count of characters printed
*/
void print_binary(va_list args, format_t format, void *count)
{
	unsigned int number = va_arg(args, unsigned int);
	char *n = _itoa(number, BINARY_BASE);

	CHECK_RIGHT_JUSTIFICATION(n, format, count, justifier)
		_puts(n, count);
	CHECK_LEFT_JUSTIFICATION(n, format, count, justifier)
		_putchar('\0', count);
	free(n);
}
