#include "lists.h"

/**
 * free_list - frees memory allocated in a list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (head->next != NULL)
	{
		temp->next = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = temp->next;
	}
	free(head->str);
	free(head);
}
