#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 *
 * Description:
 *  - str is duplicated.
 *  - the function strndup from 0x0B-malloc_free.c is used.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
