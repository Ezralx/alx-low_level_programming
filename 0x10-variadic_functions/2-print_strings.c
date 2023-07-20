#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator:stringto be printed between numbers
 * @n: number of integers to be passed to the function
 * @...: adtional arguments
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
	if (separator != NULL && i != 0)
		printf("%s", separator);
	str = va_arg(valist, char *);
	printf("%s", (str == NULL) ? "(nil)" : str);
	}
	printf("\n");
	va_end(valist);
}

