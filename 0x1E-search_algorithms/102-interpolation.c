#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: the array to be searched
 * @size: size of the array
 * @value: the value being search
 * Return: the first index where value is located on success or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0;
	size_t pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));
	if (array == NULL)
		return (-1);

	while (pos <= high && pos >= low)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
