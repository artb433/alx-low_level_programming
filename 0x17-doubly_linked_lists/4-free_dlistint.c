#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free memory allocated for a doubly linked list
 *
 * @head: head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
