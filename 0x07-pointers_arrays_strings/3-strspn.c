#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: first char pointer inital segment
 * @accept: second char pointer
 *
 * Return: n number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}


