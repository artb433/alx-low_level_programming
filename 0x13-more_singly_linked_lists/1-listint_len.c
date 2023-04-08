#include "lists.h"

/**
 * listint_len - print the number of elements in a singly linked list
 *
 * @h: head of list (holds address of the first node)
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
