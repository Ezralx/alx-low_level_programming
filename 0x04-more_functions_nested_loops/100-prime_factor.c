#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int prime, num;

	num = 612852475143;

	for (prime = 2; prime <= num; prime++)
	{
		if (num % prime == 0)
		{
			num /= prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
