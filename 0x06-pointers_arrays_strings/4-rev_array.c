#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a:array to be reversed.
 * @n:number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int x, tmp;

	for (x = n - 1; x >= n / 2; x--)
	{
		tmp = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = tmp;
	}
}
