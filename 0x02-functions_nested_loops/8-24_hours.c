#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	int hours = h;
	int minutes = m;

	for (h = 0; h <= 23; h++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
