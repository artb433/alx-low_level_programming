#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list
 *
 * @head: head of the linked list
 * @n: value for integer element in the node
 *
 * Return: address of the new element or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
