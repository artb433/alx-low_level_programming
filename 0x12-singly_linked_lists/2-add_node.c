#include "lists.h"

/**
 * *add_node - replace head of linked list with a new node
 *
 * @head: pointer to head node
 * @str: string to for data field of linked list
 *
 * Return: address of new element or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_len;

	str_len = strlen(str);
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
