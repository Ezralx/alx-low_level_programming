#include "main.h"
/**
 * _strstr - a function that locates a substring.
 *
 * @needle: first char pointer
 * @haystack: second char pointer
 *
 * Return: located substring s or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)

		{
			if (!(needle[count]))
				return (haystack);
		}
	}
	return ('\0');
}

