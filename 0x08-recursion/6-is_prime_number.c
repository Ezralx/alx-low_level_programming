#include "main.h"

/**
 * check_prime - check a number is prime recursively
 * @n: number to evaluate
 * @c: counter check
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int c)
{
	int count = 0;

	if (c <= n)
	{
		if (n % c == 0)
			count++;
		return (count + check_prime(n, c + 1));
	}
	return (count);
}
/**
 * is_prime_number - returns an integer is a prime number or not
 * @n: orignal number
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (check_prime(n, 1) == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

