#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the pointer to the first node
 * @n: data for the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp_node;

	temp_node = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = newnode;
	return (newnode);
}
