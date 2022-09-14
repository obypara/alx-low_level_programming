#include "main.h"
/**
 *_isalpha - a function that checks for alphabetic character
 *@c: is a letter, lowercase or uppercase
 *
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 'a', 'A' && c <= 'z', 'Z')
	{
		return (1);
	}
	else
	return (0);
}
