#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: unsigned integer whose size is to be allocated
 * description: if malloc fails the process terminates with
 * a status value of 98
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
