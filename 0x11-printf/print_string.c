#include "main.h"

/**
 * print_string - prints a string
 * @args: va_list of arguments
 * @format: format struct
 * @count: pointer to count of characters printed
 * Return: void
 */
void print_string(va_list args, format_t format, void *count)
{
	char *str = va_arg(args, char *);
	int precision = format.precision != -1 ? format.precision : _strlen(str);
	int i;

	CHECK_RIGHT_JUSTIFICATION(str, format, count, justifier)

	for (i = 0; i < precision; i++)
		_putchar(str[i], count);

	CHECK_LEFT_JUSTIFICATION(str, format, count, justifier)

	_putchar('\0', count);
}
