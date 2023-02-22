#include "main.h"

/**
 * jack_bauer - prints every minute of a given day
 * @start: the start time in minutes since midnight
 * @end: the end time in minutes since midnight
 *
 * Return: void
 */

void jack_bauer(int start, int end)
{
	int hours, minutes;

		for (hours = start / 60; hours <= end / 60; hour++)
		{
			for (minutes = 0; minutes < 60; minutes++)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
				_putchar(':');
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
				_putchar('\n');
			}
		}
}
