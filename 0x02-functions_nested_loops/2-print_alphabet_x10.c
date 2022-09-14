#include "main.h"
/**
 * print_alphabeth_x10 - a function to print alphabeth x10
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
