#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pointer to the head
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: data for new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int len = 0, k = 0;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	if ((h == NULL) || ((*h) == NULL) || (idx < k) || (idx > (len)))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	else if (idx == len)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	else
	{
		temp = *h;
		for (len = 0; len != idx;)
		{
			temp = temp->next;
			len++;
		}
		new->n = n;
		new->next = temp;
		new->prev = temp->prev;
		temp->prev = new;
		new->prev->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
