#include "main.h"

/**
 * _calloc - mimics c calloc function
 * @nmemb: number of elements in the array
 * @size: size of each elemenyts
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	k = ptr;
	for (i = 0; i < (nmemb * size); i++)
		k[i] = 0;
	return (ptr);
}
