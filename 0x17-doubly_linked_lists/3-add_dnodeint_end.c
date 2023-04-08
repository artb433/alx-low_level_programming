#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of doubly linked list
 *
 * @head: head of doubly linked list
 * @n: value to be added at integer field of new node
 *
 * Return: memory address of new node or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_end_node;

	temp = *head;
	new_end_node = malloc(sizeof(dlistint_t));

	if (new_end_node == NULL)
		return (NULL);

	while (temp != NULL && temp->next != NULL)
		temp = temp->next;

	new_end_node->n = n;
	new_end_node->next = NULL;
	new_end_node->prev = temp;

	if (temp != NULL)
		temp->next = new_end_node;
	if (*head == NULL)
		*head = new_end_node;

	return (new_end_node);
}
