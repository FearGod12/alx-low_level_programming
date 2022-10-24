#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 1;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			break;
		}
		head = head->next;
	}
	return (i);
}
