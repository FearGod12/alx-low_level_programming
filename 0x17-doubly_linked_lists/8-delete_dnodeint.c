#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at position index
 * @head: pointer to the head
 * @index: position of node to be deleted counting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int k = 0, i = 0;

	if (!head || !(*head) || (index < i))
		return (-1);
	while (temp)
	{
		
		if (i == index)
		{
			if (index == k)
			{
				if (temp->next)
				{
					temp->next->prev = NULL;
					(*head) = (*head)->next;
				}
				else
					*head = NULL;
			}
			else if (temp->next == NULL)
			{
				temp->prev->next = NULL;
			}
			else
			{
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
			}
			free(temp);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
