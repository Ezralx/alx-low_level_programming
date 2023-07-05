#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a string length to be returned
 *
 * Return:int value of length of a srting
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

