#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the first node
 * Return: pointer to the newly reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *nextnode = NULL;

	nextnode = *head;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = nextnode;
	}
	*head = prev_node;
	return (*head);
}
