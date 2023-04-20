#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * @...: Addtional Arguments tha will be passed
 *
 * Return: sum or If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
			sum += va_arg(valist, int);
		va_end(valist);
		return (sum);
	}
}

