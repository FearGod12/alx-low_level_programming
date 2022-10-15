#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer to old memory location
 * @old_size: the old size of memory
 * @new_size: the new size to be reallocated
 * Return: a pointer to the new memory location
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
