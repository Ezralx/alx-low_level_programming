#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list pointer to the head
 *
 * Return:All the elments in the list(nodes)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;

	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);

		count = count + 1;

		cursor = cursor->next;

	}
	return (count);
}

