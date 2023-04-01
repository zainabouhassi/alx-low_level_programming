#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get length of
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * _puts - prints a string
 * @str: string to print
 * @count: pointer to count of characters printed
 */
void _puts(char *str, void *count)
{
	if (str == NULL)
		str = "(null)";
	while (*str)
		_putchar(*str++, count);
}
