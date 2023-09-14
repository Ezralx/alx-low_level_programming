#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the,
 * data (n) of a linked list.
 * @head: pointer to pointer to head of linked list.
 *
 * If the list is empty, return 0.
 *
 * Return: The sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
