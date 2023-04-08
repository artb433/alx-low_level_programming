#include "lists.h"

/**
 * *add_nodeint - add a new node at the begining of the list
 *
 * @head: head of list (holds address of the first node in the list)
 * @n: integer to be inserted as value at the data part of node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
