#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * of a list_t list.
 * @head: The head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: NULL on failure and the address
 * of the new element on success.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	size_t i = 0;
	list_t *temp = NULL;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str) ? strdup(str) : (NULL);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
