#include "search_algos.h"

/**
 * advance - performs binary search using recursion
 * @array: array to be searched
 * @low: starting index
 * @high: ending index
 * @value: value being searched
 * Return: the first index where value is located on success or -1 on failure
 */
int advance(int *array, int low, int high, int value)
{
	int i, L = low, H = high, M;

	if (L <= H)
	{
		M = (H + L) / 2;
		printf("Searching in array: ");
		for (i = L; i < H; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[H]);
		if (array[M] == value)
		{
			if (array[M - 1] != value)
				return (M);
			return (advance(array, L, M, value));
		}
		if (array[M] > value)
			return (advance(array, L, M, value));
		else
			return (advance(array, M + 1, H, value));
	}
	return (-1);
}

/**
 * advanced_binary - performs binary search using recursion
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched for
 * Return: the first index where value is located on success or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (advance(array, 0, size - 1, value));
}
