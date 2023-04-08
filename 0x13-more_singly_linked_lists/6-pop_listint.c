#include "lists.h"

/**
 * pop_listint - delete the head of a linked list and return its data
 *
 * @head: head of the linked list
 *
 * Return: return 0 if the linked list is empty or the data of the head
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
