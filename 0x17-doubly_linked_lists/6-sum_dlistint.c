#include "lists.h"

/**
 * sum_dlistint -  sums all the data (n) of a dlistint_t linked list.
 * @head: pointer to the head
 * Return: the sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
