#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int b = 2;
	unsigned long n = 612852475143;

	while (b != n)
	{
		if (n % b == 0)
		{
			n = n / b;
		} else
		{
			b++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
