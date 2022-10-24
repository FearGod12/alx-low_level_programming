#include "lists.h"

/**
 * listint_len -  number of elements in a list
 * @h: pointer to the first node of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
