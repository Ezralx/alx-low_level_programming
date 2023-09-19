#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @c: first occurence of a character
 * @s: array of string
 *
 * Return: string s
 */
char *_strchr(char *s, char c)
{

	while (s[0] != '\0')
	{

		if (s[0] == c)

			return (s);

		else if (s[1] == c)

			return (s + 1);

		s++;

	}

	return (s + 1);
}

