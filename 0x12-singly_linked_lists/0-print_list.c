#include "lists.h"

/**
 * print_list - print structure elements
 *
 * @h: pointer to head of structure
 *
 * Return: number of elements in each node of linked list
 */

size_t print_list(const list_t *h)
{
	int len;
	int elem_count;
	char *string;

	elem_count = 0;

	while (h)
	{
		len = h->len;

		if (h->str != NULL)
		{
			string = h->str;
		}
		else
		{
			len = 0;
			string = "(nil)";
		}

		printf("[%d] %s\n", len, string);

		elem_count += 1;
		h = h->next;
	}

	return (elem_count);
}
