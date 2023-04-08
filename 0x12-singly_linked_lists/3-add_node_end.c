#include "lists.h"

/**
 * *add_node_end - add a node at the end of a linked list
 *
 * @head: memory address of the head (first node in linked list)
 * @str: string value to be added at the end
 *
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_len;
	list_t *end_node, *tmp_node;

	str_len = strlen(str);

	tmp_node = *head;
	end_node = malloc(sizeof(list_t));

	end_node->str = strdup(str);
	end_node->len = str_len;
	end_node->next = NULL;

	if (tmp_node == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;

		tmp_node->next = end_node;
	}

	return (*head);
}
