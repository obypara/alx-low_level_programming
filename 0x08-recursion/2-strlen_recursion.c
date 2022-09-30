#include "main.h"

/**
 * _strlen_recursion - returms tge length of string
 * @s: string to print
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
