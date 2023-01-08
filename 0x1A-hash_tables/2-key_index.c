#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @size: size of the array of the hash table
 * @key: key which will be used to generate index
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
