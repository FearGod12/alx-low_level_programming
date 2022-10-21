#include "lists.h"

/**
 * free_list - frees memory allocated in a list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		free(head);
		head = temp->next;
	}
}
