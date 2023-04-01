#include "main.h"
#include <stdlib.h>

/**
 * print_unsigned_helper - prints an unsigned integer
 * @number: the unsigned integer to print
 * @count: pointer to count of characters printed
 */
void print_unsigned_helper(unsigned int number, void *count)
{
	if (number == 0)
		return;
	print_unsigned_helper(number / 10, count);
	_putchar((number % 10) + '0', count);
}

/**
 * print_unsigned - prints an unsigned integer
 * @args: va_list of arguments
 * @format: format struct
 * @count: pointer to count of characters printed
*/
void print_unsigned(va_list args, format_t format, void *count)
{
	unsigned int number = va_arg(args, unsigned int);
	char sign = in_flags('+', format.flags) ? '+' : 0;
	char *n = _itoa(number, "0123456789");
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
