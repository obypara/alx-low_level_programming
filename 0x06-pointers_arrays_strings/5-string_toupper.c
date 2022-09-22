#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: the character to be converted
 * Return: c
 */
char *string_toupper(char *c)
{
	int k = 0;

	while (c[k])
	{
		if (c[k] >= 97 && c[k] <= 122)
			c[k] = c[k] - 32;
		k++;
	}
	return (c);
}
