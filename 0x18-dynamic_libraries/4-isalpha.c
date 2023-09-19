#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: checks lowecase or uppercase character
 *
 * Return: 1 for lowercase and 0 for uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

