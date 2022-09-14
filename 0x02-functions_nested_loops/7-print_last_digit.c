#include "main.h"
/**
 *print_last_digit - a function that prints the last digit of a number
 *@n: the int to get last digit of
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
