#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n:the number of times the character _ should be printed
 * If n is 0 or less, the function should only print \n
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{

			_putchar('_');

			i++;

		}
	_putchar('\n');
	}
	else
	{

	_putchar('\n');
	}
}

