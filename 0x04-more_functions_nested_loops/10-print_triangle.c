#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int a;
	int j;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{

		for (a = 1; a <= size; a++)
		{
			for (j = size - a ; j > 0; j--)
			{
				_putchar(' ');
			}
			for (c = 0; c < a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
