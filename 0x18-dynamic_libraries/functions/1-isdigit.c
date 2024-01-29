#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: number need to be  checked
 * Return: 1 for digit 0 to 9, 0 for other
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}

