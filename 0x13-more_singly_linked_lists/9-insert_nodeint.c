#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at specific position
 * @head: double pointer to the first node
 * @idx: position to be inserted at
 * @n: data for new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *prev, *current;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || *head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	current = *head;
	if (idx == 0)
	{
		newnode->next = current;
		*head = newnode;
		return (newnode);
	}
	while (current != NULL)
	{
		if (i == idx)
		{
			newnode->next = current;
			prev->next = newnode;
			return (newnode);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (idx == i)
	{
		prev->next = newnode;
		return (newnode);
	}

	free(newnode);
	return (NULL);
}
