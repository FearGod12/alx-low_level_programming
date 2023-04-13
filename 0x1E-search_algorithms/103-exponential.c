#include "search_algos.h"

/**
 * binary - performs binary search
 * @array: the subarray being searched
 * @start: starting point of the search in the array
 * @end: ending point ofthe search in the array
 * @value: value being searched
 * Return: return the index of the value or -1 if it fails
 */
int binary(int *array, size_t start, size_t end, int value)
{
	size_t i, M;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[end]);
		M = ((start + end) / 2);
		if (array[M] < value)
			start = M + 1;
		else if (array[M] > value)
			end = M - 1;
		else
			return (M);
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value being searched for
 * Return: the first index where value is located on success or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, prev = 0;

	if (array == NULL)
		return (-1);

	if (array[i] == value)
		return (i);
	i += 1;
	while (i < size)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (i * 2 >= size)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, size - 1);
				return (binary(array, i, size - 1, value));
			}
		}
		else if (array[i] == value)
			return (i);
		else if (array[i] > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
			return (binary(array, prev, i, value));
		}
		prev = i;
		i = i * 2;
	}
	return (-1);
}
