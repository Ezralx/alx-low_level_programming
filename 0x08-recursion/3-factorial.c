#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number
 *
 * Return: -1 when number is less than 0 which implies error
 * 1 if factorial is 0
 * n if the factorial is greater than zero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

