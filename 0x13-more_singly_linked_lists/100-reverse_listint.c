#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 *
 * @head: head of singly linked list
 *
 * Return: pointer to head of linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = next = NULL;

	while (*head != NULL)
	{
		next =  (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
