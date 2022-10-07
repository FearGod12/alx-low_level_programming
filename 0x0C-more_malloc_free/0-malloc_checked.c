#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: unsigned integer whose size is to be allocated
 * description: if malloc fails the process terminates with
 * a status value of 98
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(__attribute__((unused))unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
