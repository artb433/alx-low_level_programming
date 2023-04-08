#include "lists.h"

/**
 * dlistint_len - get the number of elements in a linked list
 *
 * @h: head of the linked list
 *
 * Return: Number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		node_count += 1;
		h = h->next;
	}

	return (node_count);
}
