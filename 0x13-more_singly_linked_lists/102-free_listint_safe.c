#include "lists.h"

/**
 *  free_listint_safe - frees a list including those with  a loop
 *  @h: double pointer to the first node
 *  Return: the size of yhe list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	if (!*h)
		return (count);
	temp = *h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
		free(*h);
		if (temp >= *h)
		{
			*h = NULL;
			return (count);
		}
		*h = temp;
	}
	return (count);
}
