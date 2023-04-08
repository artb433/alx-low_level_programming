#include "lists.h"

/**
 * *get_nodeint_at_index - get node at specified index
 *
 * @head: head of linked list
 * @index: index of node in linked list
 *
 * Return: return address of node at index or null if the node does'nt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	temp = head;

	for (; i < index; i++)
	{
		if (!temp)
			return (NULL);
		if (temp)
			temp = temp->next;
	}

	return (temp);
}
