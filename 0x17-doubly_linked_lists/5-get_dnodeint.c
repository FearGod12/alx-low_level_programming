#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: index of the node, starting from 0
 * Return: returns the nth node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (temp)
	{
		if (index == i)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
