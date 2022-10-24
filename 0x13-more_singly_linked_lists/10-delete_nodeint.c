#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific position
 * @head: pointer to first position
 * @index: position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	curr = *head;
	prev = curr;
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	while (curr)
	{
		temp = curr;
			if (i == index)
			{
				prev->next = curr->next;
				free(curr);
				return (1);
			}
		curr = curr->next;
		prev = temp;
		i++;
	}
	return (-1);
}
