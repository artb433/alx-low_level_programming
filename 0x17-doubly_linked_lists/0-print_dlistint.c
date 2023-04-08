#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all the elements in a linked list
 *
 * @h: head of doubly linked list
 *
 * Return: the number of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count += 1;
	}

	return (node_count);
}
