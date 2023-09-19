#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: if str1 < str2, negative first unmached char
 * if str1 == str2, 0
 * if str1> str2, positive first unmached char
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);

		}
		x++;
	}
	return (0);
}

