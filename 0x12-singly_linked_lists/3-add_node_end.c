#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the address of the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 *
 * Description:
 *  - str is duplicated.
 *  - the function strndup from 0x0B-malloc_free.c is used.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (new);
}
