#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: string to be encoded
 *
 * Return: a pointer to encoded string
 */
char *leet(char *str)
{
	int i, count = 0;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (count = 0; count <= 7; count++)
		{
			if (str[i] == leet[count] ||
			str[i] - 32 == leet[count])
				str[i] = count + '0';
		}
		i++;
	}
	return (str);
}

