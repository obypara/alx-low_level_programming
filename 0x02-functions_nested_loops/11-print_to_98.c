#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - a function that prints all natural numbers from n to 98
 *@n: is the natural number to ve printed
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
