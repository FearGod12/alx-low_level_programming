#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value of the array elements
 * @max: maximum value of the array elements
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	j = max - min;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (j + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (j + 1); i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
