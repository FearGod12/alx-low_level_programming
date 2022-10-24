#include "lists.h"

/**
 * free_listint2 - frees memory allocated to a list and sets head to NULL
 * @head: pointer to the first node;
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
