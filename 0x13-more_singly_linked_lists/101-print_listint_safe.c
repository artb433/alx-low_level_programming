#include "lists.h"

/**
 * print_listint_safe - print node of a linked list by iterating once
 *
 * @h: head of linked list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int size = 0;
	const listint_t *temp;

	temp = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		size++;
	}

	if (size == 0)
		exit(98);

	return (size);
}
