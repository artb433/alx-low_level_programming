#include "lists.h"

/**
 * sum_dlistint - compute the sum of all n values in a doubly linked list
 *
 * @head: head of the linked list
 *
 * Return: sum of all n values or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
