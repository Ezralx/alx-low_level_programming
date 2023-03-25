#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int ch;

	for  (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
}

