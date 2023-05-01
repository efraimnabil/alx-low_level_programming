#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the first node in the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int n;

	if (!head || !*head)
		return (0);

	next_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_node;

	return (n);
}
