#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest:* storing the copied stringchar.
 * @src:This is the source string.
 * @n: This is the maximum number of characters to be copied.
 *
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)

		dest[x] = src[x];
	for ( ; x < n; x++)

		dest[x] = '\0';

	return (dest);

}

