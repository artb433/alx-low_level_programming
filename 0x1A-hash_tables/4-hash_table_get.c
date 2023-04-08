#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrive a value associated with a key
 *
 * @ht: hash table to retrieve value from
 * @key: key whose value is to be retrieved
 *
 * Return: value associated with the element or NULL if \
 *         key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index] != NULL)
	{
		if (ht->array[index]->next != NULL)
		{
			if (strcmp(ht->array[index]->key, key) == 0)
				return (ht->array[index]->value);

			temp = ht->array[index];
			while (temp != NULL)
			{
				if (strcmp(temp->key, key) == 0)
					return (temp->value);

				temp = temp->next;
			}
		}
		else
		{
			if (strcmp(ht->array[index]->key, key) == 0)
				return (ht->array[index]->value);
		}
	}

	return (NULL);
}
