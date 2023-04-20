#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator:stringto be printed between numbers
 * @n: number of integers to be passed to the function
 *
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);


	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(valist, int));
		else if (separator && i == 0)
			printf("%d", va_arg(valist, int));
		else
			printf("%s%d", separator, va_arg(valist, int));
	}

	va_end(valist);

	printf("\n");
}

