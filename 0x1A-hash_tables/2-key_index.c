#include "hash_tables.h"

/**
 * key_index - return the index where a hash key should be stored
 *
 * @key: key in the (python dictionary like) array
 * @size: size of the array of the hash table
 *
 * Return: the index where the key/value pair will be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_table_index;

	hash_table_index = hash_djb2(key);
	return (hash_table_index % size);
}
