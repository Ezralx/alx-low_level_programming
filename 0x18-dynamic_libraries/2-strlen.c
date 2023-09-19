#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: String
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}


