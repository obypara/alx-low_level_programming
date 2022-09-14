#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: 0 (Success)
 */
void times_table(void)
{
	int r;
	int c;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			int prod = r * c;

			if (c == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
