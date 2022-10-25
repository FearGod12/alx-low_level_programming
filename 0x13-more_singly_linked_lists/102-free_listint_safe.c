#include "lists.h"

/**
 *  free_listint_safe - frees a list including those with  a loop
 *  @h: double pointer to the first node
 *  Return: the size of yhe list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *tmp;
	size_t count = 0;

	if (!*h)
		return (count);
	temp = tmp = *h;
	while (*h && temp && temp->next != tmp->next)
	{
		count = count + 2;
		*tmp = *tmp->next;
		temp = temp->next->next;
		free(*h);
		*h = tmp;
	}
	*h = NULL;
		return (count);
}
