#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of a certain number
 * of elements size bytes each and
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return:if nmemb = 0, size = 0, or the fuction fails -null.
 * othewise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		ptr[x] = 0;
	return (ptr);
}

