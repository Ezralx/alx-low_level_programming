#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @str: String to be changed
 *
 * Return: changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')

			str[i] -= 32;

		i++;
	}
	return (str);
}
