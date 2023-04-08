#include "lists.h"

/**
 * print_listint - print all the elements of a listint list
 *
 * @h: head of the linked list (holds pointer to first node);
 *
 * Return: total number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		count++;
	}

	return (count);
}
