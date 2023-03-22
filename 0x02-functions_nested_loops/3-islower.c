#include "main.h"
/**
 * _islower -function that checks for lowercase character
 * @c:is to ckeck wheater the caracter is lowercase or not
 * Return: 0 (if it is lowercase) otherwise 1.
 */
int _islower( int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

