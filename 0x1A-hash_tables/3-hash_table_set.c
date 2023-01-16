#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key associated with the item can not be an empty string
 * @value: value associated with the item value must be duplicated
 * value can be an empty string
 * Return:1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element, *array;
	unsigned long int index;

	if (!key || strlen(key) == 0 || !ht || !value)
		return (0);
	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	index = key_index((const unsigned char *) key, ht->size);
	array = ht->array[index];
	if (!array)
	{
		array = element;
		element->next = NULL;
	}
	else if (strcmp(array->key, key) == 0)
	{
		array->value = strdup(value);
	}
	else
	{
		element->next = array;
		array = element;
	}
	return (1);
}
