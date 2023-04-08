#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print all the elements of a hash table
 *
 * @ht: hash table whose indexes are to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	int check;
	hash_node_t *temp;
	unsigned long int i, j;

	if (ht == NULL)
		return;
	i = check = 0;

	printf("{"); /* print opening curly brace according to format */
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp == NULL) /*continue if table index holds nothing*/
			continue;
		if (temp->next == NULL) /*print key/val without collission*/
			printf("'%s': '%s'", temp->key, temp->value);
		else /* handle collission printint */
		{
			for (; temp; temp = temp->next)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next != NULL)
					printf(", ");
			}
		} check = 0; /*check if this is last valid index in table*/
		if (i != (ht->size - 1))
		{
			for (j = i + 1; j < ht->size; j++) /*print delimeter*/
			{
				if (ht->array[j] != NULL)
				{
					check = 1;
					break;
				}
			}
			if (check == 1)
				printf(", ");
		}
	}
	printf("}\n"); /* print closing curly brace according to format */
}
