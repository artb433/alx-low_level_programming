#include "lists.h"

/**
 * free_list - free the total amount of memory allocated to a list
 *
 * @head: pointer to head of list
 */

void free_list(list_t *head)
{
	list_t *curr;

	if (head != NULL)
	{
		curr = head;
		head = head->next;

		free(curr->str);
		free(curr);

		/* use recursion to free allocated memory */
		free_list(head);
	}
}
