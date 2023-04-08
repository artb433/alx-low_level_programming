#include "lists.h"

/**
 * *add_nodeint_end - add a node at the end of the singly linked list
 *
 * @head: head of list
 * @n: value to be added at data part of node
 *
 * Return: address of new element or NULL upon failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node, *temp;

	temp = *head;
	new_end_node = malloc(sizeof(listint_t));

	if (new_end_node == NULL)
		return (NULL);

	/* assign values to fields of new node */
	new_end_node->n = n;
	new_end_node->next = NULL;

	if (temp == NULL)
		*head = new_end_node;

	if (temp != NULL)
	{
		/*traverse (loop through) list to get to its tail (last node)*/
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_end_node;
	}

	return (*head);
}
