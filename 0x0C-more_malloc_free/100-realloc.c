#include "main.h"

/**
 * lenght - finds the lenght of a string
 * @ptr: pointer to the string
 * Return: lenght of the string in integer
 */
unsigned  int lenght(char *ptr)
{
	unsigned int  i, len = 1;

	for (i = 0; ptr[i] != '\0'; i++)
		len++;
	return (len);
}
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
	char *pptr, *k;
	unsigned int i;

	k = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		pptr = malloc(new_size);
		if (pptr == NULL)
			return (NULL);
		return (pptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		pptr = malloc(new_size);
		if (pptr == NULL)
			return (NULL);
		for (i = 0; i < lenght(ptr); i++)
			pptr[i] = k[i];
		free(ptr);
	}
	if (new_size < old_size)
	{
		pptr = malloc(new_size);
		if (pptr == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
			pptr[i] = k[i];
		free(ptr);
	}
	return (pptr);
}
