#include "main.h"
/**
 * print_alphabet - a function that prints alphabet, lower case
 *
 * return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
