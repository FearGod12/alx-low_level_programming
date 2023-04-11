#include "search_algos.h"

/**
 * linear - performs linear search on given array
 * @array: array to be search
 * @start: starting point in the array
 * @end: end point in the array
 * @value: value being searched for
 * Return: the index of the value in the array on success or -1 on failure
 */
int linear(int *array, size_t start, size_t end, int value)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		if (array[i] != value)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched for
 * Return: the first index where value is located of -1 if it fails
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, next = 0;

	if (array == NULL)
		return (-1);

	if (array[next] == value)
		return (next);

	printf("Value checked array[%lu] = [%d]\n", next, array[next]);
	if ((next + sqrt(size)) > size)
		next = size - 1;
	else
		next += sqrt(size);

	while (next < size)
	{
		if (array[next] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", next, array[next]);
			prev = next;
			if ((next + sqrt(size)) > size)
			{
				next += sqrt(size);
				printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
				next = size - 1;
				break;
			}
			else
				next += sqrt(size);
		}
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
			break;
		}
	}
	return (linear(array, prev, next, value));
}
