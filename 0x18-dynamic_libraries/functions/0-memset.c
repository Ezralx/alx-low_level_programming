#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s:pointer to first address of a memory to be filled
 * @b:constant byte value which  char
 * @n:unsigned int which changes number of bytes
 *
 * Return: s which is changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n -= 1;
	}
	return (s);
}

