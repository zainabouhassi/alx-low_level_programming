#include "main.h"
#include <stdlib.h>

/**
 * print_integer - prints an integer
 * @args: va_list of arguments
 * @format: format struct
 * @count: pointer to count of characters printed
 */
void print_integer(va_list args, format_t format, void *count)
{
	ssize_t number = format.length == 'h' ? (short int)va_arg(args, int) :
		format.length == 'l' ? va_arg(args, long int) : va_arg(args, int);
	char sign = in_flags('+', format.flags) && number >= 0 ? '+' : 0;
	char *n = _itoa(number, DECIMAL_BASE);
	int precision = format.precision > _strlen(n) ?
		format.precision - _strlen(n) : 0;
	format.width -= precision;

	sign != 0 ? format.width-- : 0;

	CHECK_RIGHT_JUSTIFICATION(n, format, count, justifier)

	_putchar(sign, count);
	while (precision--)
		_putchar('0', count);
	_puts(n, count);

	CHECK_LEFT_JUSTIFICATION(n, format, count, justifier)

	_putchar('\0', count);
	free(n);
}
