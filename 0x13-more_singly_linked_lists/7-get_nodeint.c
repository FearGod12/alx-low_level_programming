#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer to the first node
 * @index: the position of the node in the list
 * Return: data of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i != index)
	{
		i++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
