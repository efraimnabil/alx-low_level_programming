#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first node in the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
