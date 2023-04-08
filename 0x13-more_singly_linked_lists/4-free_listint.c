#include "lists.h"

/**
 * free_listint - free all memory allocated to nodes in a linked list
 *
 * @head: head of list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
