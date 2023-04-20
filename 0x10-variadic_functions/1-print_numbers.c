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

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	while (i < n)
	{
		if (i != 0 && separator)
		
			printf("%s", separator);
		printf("%d", (int)va_arg(valist, int));
		i++;
		
	}
	va_end(valist);
	printf("\n");
}

