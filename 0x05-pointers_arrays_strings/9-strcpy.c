#include "main.h"
/**
 * *_strcpy -  a function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *  @dest :copied to
 *  @src: string to be copied
 *  Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{

		i++;
	}
	for (j = 0; j < i; j++)
	{

		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
