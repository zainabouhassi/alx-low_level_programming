#include "main.h"

/**
 * print_percent - prints a percent sign
 * @args: va_list of arguments (unused)
 * @format: format struct
 * @count: pointer to count of characters printed
*/
void print_percent(__attribute__((unused)) va_list args,
				   format_t format, void *count)
{
	char *percent = "%";

	CHECK_RIGHT_JUSTIFICATION(percent, format, count, justifier)

	_putchar('%', count);

	CHECK_LEFT_JUSTIFICATION(percent, format, count, justifier)

	_putchar('\0', count);
}
