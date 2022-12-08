#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t const *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}
	return (len);
}
