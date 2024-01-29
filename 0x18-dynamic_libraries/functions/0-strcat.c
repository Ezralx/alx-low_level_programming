#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest:Returns a pointer to the resulting string
 * @src:source to appended to dest
 *
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
	int count, count1;

	count = 0;

	while (*(dest + count) != '\0')
	{
		count++;

	}

	count1 = 0;

	while (count1 >= 0)
	{
		*(dest + count) = *(src + count1);

		if (*(src + count1) == '\0')

			break;
		count++;
		count1++;
	}
	return (dest);
}

