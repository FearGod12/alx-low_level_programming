#include "main.h"

/**
 * *create_array - creates an array  of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character to be used to initialize the array
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *t;

	if (size == 0)
		return (NULL);
	t =  (char *) malloc(sizeof(int) * size);
	if (t == NULL)
		return (t);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
