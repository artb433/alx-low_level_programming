#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - add an element to the hash table (ht)
 *
 * @ht: hash table to be populated
 * @key: key of the array index in the hash table
 * @value: value to be assigned to the key
 *
 * Return: 1 on success; 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *val __attribute__((unused));
	hash_node_t *temp __attribute__((unused));

	if (ht == NULL || !(strlen(key) > 0))
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);

		ht->array[index]->key = malloc(sizeof(char) * strlen(key));
		ht->array[index]->value = malloc(sizeof(char) * strlen(value));
		ht->array[index]->next = NULL;
		strcpy(ht->array[index]->key, key);
		strcpy(ht->array[index]->value, value);
	}
	else
	{
		val = malloc(sizeof(hash_node_t));
		if (val == NULL)
			return (0);

		val->key = malloc(sizeof(char) * strlen(key));
		val->value = malloc(sizeof(char) * strlen(value));
		val->next = ht->array[index];
		strcpy(val->key, key);
		strcpy(val->value, value);
		ht->array[index] = val;
	}

	return (1);
}
