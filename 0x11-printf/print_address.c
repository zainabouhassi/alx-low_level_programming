#include "main.h"
#include <stdlib.h>

/**
* print_address - prints the address of a variable
* @args: the variable to print
* @format: format struct
* @count: pointer to count of characters printed
*/
void print_address(va_list args, format_t format, void *count)
{
	size_t address = (unsigned long int)va_arg(args, void *);

	char *n = _itoa(address, HEXADECIMAL_BASE_LOWER);

	format.width -= 2; /* remove 0x length */
	CHECK_RIGHT_JUSTIFICATION(n, format, count, justifier)

	_puts("0x", count);
	_puts(n, count);

	CHECK_LEFT_JUSTIFICATION(n, format, count, justifier)

	_putchar('\0', count);
	free(n);
}
