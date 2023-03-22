#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number
 *@x:the number which the last digit taken
 *Return:d
 */
int print_last_digit(int x)
{
	int d;

	if (x < 0)

	x = -x;

	d = x % 10;

	if (d < 0)

	d = -d;

	_putchar(d + '0');

	return (d);
}

