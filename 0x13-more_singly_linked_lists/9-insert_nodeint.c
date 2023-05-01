#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the first node in the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;

	if (!head)
		return (NULL);

	if (idx)
	{
		prev_node = get_nodeint_at_index(*head, idx - 1);
		if (!prev_node)
			return (NULL);
	}
	else
		prev_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx)
	{
		new_node->next = prev_node->next;
		prev_node->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
