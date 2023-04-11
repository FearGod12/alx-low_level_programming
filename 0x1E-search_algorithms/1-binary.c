#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched for
 * Return: index where value is located on success or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, L = 0, H = size - 1, M;

	while (L <= H)
	{
		printf("Searching in array: ");
		for (i = L; i < H; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[H]);
		M = ((L + H) / 2);
		if (array[M] < value)
			L = M + 1;
		else if (array[M] > value)
			H = M - 1;
		else
			return (M);
	}
	return (-1);
}
