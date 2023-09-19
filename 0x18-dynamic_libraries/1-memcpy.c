#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: where memory stored
 * @src: source memory copied from
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n -= 1;
	}
	return (dest);
}
