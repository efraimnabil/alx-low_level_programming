#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to the first node in the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (!head)
		return;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	*head = NULL;
}
