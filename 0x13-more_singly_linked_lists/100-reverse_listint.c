#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to the head node
 *
 * Return: pointer to the new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;
	return (*head);
}
