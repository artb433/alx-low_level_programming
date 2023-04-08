#include "lists.h"

/**
 * get_dnodeint_at_index - get the address of the node at index (index)
 *
 * @head: head of the doubly linked list
 * @index: index of node to be gotten
 *
 * Return: address of the node at given index; NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int node_count = 0;

	while (temp != NULL)
	{
		node_count += 1;
		temp = temp->next;
	}

	if (index > node_count)
		return (NULL);

	temp = head;
	node_count = 0;

	while (temp != NULL)
	{
		if (node_count == index)
			break;
		node_count += 1;
		temp = temp->next;
	}

	return (temp);
}
