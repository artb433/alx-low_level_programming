#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	i = 0;

	for (; i < ht->size; i++)
	{
		temp = ht->array[i];

		if (temp == NULL)
			continue;

		if (temp->next == NULL)
		{
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		else
		{
			for (; temp; temp = temp->next)
			{
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}

	free(ht->array);
	free(ht);
}
