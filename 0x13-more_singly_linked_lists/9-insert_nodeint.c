#include "lists.h"

/**
 * *insert_nodeint_at_index - insert a new node at specified index
 *
 * @head: head of linked list
 * @idx: index where new node is to be inserted
 * @n: value to be inserted in data field of new node
 *
 * Return: return the address of the new node or NULL upon failure
 *
 * NOTE: After insertion, new node will be the node found at index idx
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *prev_node;
	listint_t *new_node_at_index;

	i = 0;
	temp = *head;
	new_node_at_index = malloc(sizeof(listint_t));

	if (new_node_at_index == NULL)
		return (NULL);
	if (idx == 0)
	{
		free(new_node_at_index);
		return (NULL);
	}
	while (i < idx)
	{
		if (temp == NULL)
		{
			free(new_node_at_index);
			return (NULL);
		}
		if (temp != NULL)
		{
			prev_node = temp;
			temp = temp->next;
		}
		i++;
	}

	/**
	 * link link before index to newly created node and
	 * link newly created node with next node
	 */
	prev_node->next = new_node_at_index;
	new_node_at_index->n = n;
	new_node_at_index->next = temp;

	return (*head);
}
