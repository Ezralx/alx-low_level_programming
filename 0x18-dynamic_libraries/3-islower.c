#include "main.h"
/**
 * _islower -function that checks for lowercase character
 * @c:is to ckeck wheater the caracter is lowercase or not
 * Return: 1 if it is lowercase otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

