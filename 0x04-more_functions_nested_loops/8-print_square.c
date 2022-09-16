#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 *
 * @size: is the size of the square
 *
 */
void print_square(int size)
{
	int a;
	int g;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < size; a++)
		{
			for (g = 0; g < size; g++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
