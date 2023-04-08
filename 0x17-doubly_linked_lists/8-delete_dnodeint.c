#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - delete node of doubly linked
 *                            list at index (index)
 *
 * @head: head of doubly linked list
 * @index: index of node to be deleted
 *
 * Return: 1 on success; -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int node_index;

	if (*head == NULL)
		return (-1);

	temp = *head;
	node_index = 0;

	while (temp != NULL)
	{
		if (index == node_index)
		{
			if (index > 0 && temp->next  == NULL)
			{
				temp->prev->next = NULL;
			}
			else if (index > 0)
			{
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
			}
			else if (index == 0)
			{
				if (temp->next != NULL)
					temp->next->prev = NULL;
				*head = temp->next;
			}

			free(temp);
			break;
		}

		node_index += 1;
		if (temp->next != NULL)
			temp = temp->next;
	}

	return (1);
}
