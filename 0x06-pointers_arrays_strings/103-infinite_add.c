#include <stdio.h>
#include "main.h"
/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number to  add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return:if r can store the sum - pointer to the result
 * if r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, digits = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');

		num += digits;

		*(r + size_r) = (num % 10) + '0';
	       digits = num / 10;
	}
	for (; *n1; n1--, size_r--)
	{
		num = (*n1 - '0') + digits;

		*(r + size_r) = (num % 10) + '0';
		digits = num / 10;
		}
	for (; *n2; n2--, size_r--)
	{
		num = (*n2 - '0') + digits;

		*(r + size_r) = (num % 10) + '0';
		digits = num / 10;
	}
	if (digits && size_r >= 0)
	{
		*(r + size_r) = (digits % 10) + '0';
	return (r + size_r);
	}
	else if (digits && size_r < 0)
	return (0);
	return (r + size_r + 1);
}

