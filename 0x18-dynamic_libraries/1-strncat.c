#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest:* pointer to the destination array,
 * includes the additional null-character.
 * @src:This is the string to be appended.
 * @n: This is the maximum number of characters to be appended.
 *
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;

	}

	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}


