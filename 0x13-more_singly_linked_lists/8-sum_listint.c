#include "lists.h"

/**
 * sum_listint - sum the values on the address field of a linked list
 *
 * @head: head of linked list
 *
 * Return: 0 if the list is empty or sum upon completion
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (0);

	sum = 0;
	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
