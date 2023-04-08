#ifndef LISTS_H
#define LISTS_H

/* include essential standard libraries to avoid repetition*/
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list - declaration of list structure
 *
 * @str: string
 * @len: length of string
 * @next: address field of linked list
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

/* function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void pre_print(void) __attribute__((constructor));

#endif
