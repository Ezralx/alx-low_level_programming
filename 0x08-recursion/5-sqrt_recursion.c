#include "main.h"
/**
 * check_sqrt - returns the natural square root of a number.
 * @n: to be square root of the number itself
 * @c: counter
 * Return:natrural square root if not having natural square root -1
 */
int check_sqrt(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	return (check_sqrt(n, c + 1));
}
/**
 * _sqrt_recursion - finds the natural square root
 * @n:to be square root of the number itself
 * Return:natrural square root if not having natural square root -1
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(n, 1));
}

