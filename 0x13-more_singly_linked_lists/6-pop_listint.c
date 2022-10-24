#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: double pointer to the head of the list
 * Return: returns the head node’s data (n).
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (data);
}
