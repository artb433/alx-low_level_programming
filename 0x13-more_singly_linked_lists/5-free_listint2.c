#include "lists.h"

/**
 * free_listint2 - free memory allocated to nodes of a list
 * and set head to NULL
 *
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;

			free(temp);
		}
	}

	*head = NULL;
}
