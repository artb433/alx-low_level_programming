#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * NOTE: Forgive the compactness, it's all in a bid to comply with betty style
 *
 * @h: head of linked list
 * @idx: index to insert new node at
 * @n: value for n field of new node
 *
 * Return: address of new node; NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int node_index, list_len;

	temp = *h;
	node_index = 0;
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	list_len = dlistint_len(*h);
	if (new_node == NULL)
		return (NULL);
	if (!(*h) && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if ((idx > list_len) || (*h == NULL && idx > 0))
		return (NULL);
	while (temp != NULL)
	{
		if (idx == 0)
		{
			new_node->next = *h;
			new_node->prev = (*h)->prev;
			*h = new_node;
			break;
		} else if ((idx == list_len) && (node_index == idx - 1))
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
		} else if (idx == node_index && idx != list_len)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
		} node_index += 1;
		temp = temp->next;
	} return (new_node);
}

/**
 * dlistint_len - get the number of elements in a linked list
 *
 * @h: head of the linked list
 *
 * Return: Number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		node_count += 1;
		h = h->next;
	}

	return (node_count);
}
