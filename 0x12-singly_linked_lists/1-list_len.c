#include "lists.h"

/**
 * list_len - list the length of singly linked list
 *
 * @h: pointer to head of singly linked list
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	int elem_count = 0;

	while (h)
	{
		elem_count += 1;
		h = h->next;
	}

	return (elem_count);
}
