#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key associated with the value
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if (index > ht->size)
		return (NULL);
	if (ht->array[index])
		return (ht->array[index]->value);
	return (NULL);
}
