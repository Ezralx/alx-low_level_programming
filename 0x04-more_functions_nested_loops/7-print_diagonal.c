#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * if n is 0 or less, the function should only print a \n
 */
void print_diagonal(int n)
{
	int j, k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == j)

					_putchar('\\');

				else if (k < j)

					_putchar(' ');
			}
			_putchar('\n');

		}

	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}




