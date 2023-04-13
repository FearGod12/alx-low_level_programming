#include "search_algos.h"

/**
 * jump_list -  searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: the list to be searched
 * @size: size of the list
 * @value: value being searched for
 * Return: pointer to the first node where value is located or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *temp = list;
	int i, step = sqrt(size);

	if (list == NULL || size == 0)
		return (NULL);

	while (temp->next != NULL)
	{
		prev = temp;
		for (i = 0; i < step; i++)
		{
			if (temp->next != NULL)
				temp = temp->next;
		}

		printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		else if (temp->n > value)
		{
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, temp->index);
	for (i = 1; i <= step; i++)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
