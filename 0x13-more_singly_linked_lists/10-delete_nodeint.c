#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at selected index
 *
 * @head: head of linked list
 * @index: index of node to be deleted
 *
 * Return: 1 upon successful deletion or -1 upon failure
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *prev_node;

	if (*head == NULL)
		return (-1);

	i = 0;
	temp = *head;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
		return (1);
	}


	while (i < index)
	{
		if (temp == NULL)
			return (-1);

		if (temp != NULL)
		{
			prev_node = temp;
			temp = temp->next;
		}

		i++;
	}

	prev_node->next = temp->next;
	free(temp);

	return (1);
}
