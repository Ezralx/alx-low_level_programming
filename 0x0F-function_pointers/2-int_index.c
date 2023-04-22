#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array:given array
 * @size: number of element in the array
 * @cmp:pointer to the function to compair values
 *
 * Return:index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);
	if (array == NULL || cmp == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) == 1)
	return (i);
	}
	return (-1);
}

