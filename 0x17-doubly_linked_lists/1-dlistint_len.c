#include "lists.h"

/**
 * dlistint_len - finds the number of elment in a doubly linked list
 * @h: pointer to the head
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t const *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
