#include "lists.h"

/**
 * free_listint - frees memory allocated to a list
 * @head: pointer to the first node;
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
	head = NULL;
}
