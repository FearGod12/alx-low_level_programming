#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 1;

	if (!head)
		exit(98);
	while (temp)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
