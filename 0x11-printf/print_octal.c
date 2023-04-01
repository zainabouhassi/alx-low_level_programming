#include "main.h"
#include <stdlib.h>

/**
* print_octal - prints the octal representation of a number
* @args: va_list of arguments
* @format: format struct
* @count: pointer to count of characters printed
*/
void print_octal(va_list args, format_t format, void *count)
{
	size_t number = format.length == 'h' ?
			(unsigned short)va_arg(args, unsigned int) :
			format.length == 'l' ? va_arg(args, unsigned long) :
			va_arg(args, unsigned int);
	char *n = _utoa(number, OCTAL_BASE);
	int precision = format.precision > _strlen(n) ?
		format.precision - _strlen(n) : 0;

	format.width -= precision;

	CHECK_RIGHT_JUSTIFICATION(n, format, count, justifier)

	while (precision--)
		_putchar('0', count);
	_puts(n, count);

	CHECK_LEFT_JUSTIFICATION(n, format, count, justifier)

	_putchar('\0', count);
	free(n);
}
