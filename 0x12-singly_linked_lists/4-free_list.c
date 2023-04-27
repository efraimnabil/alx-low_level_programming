#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 *
 * Description:
 *  - The function sets the head to NULL.
 *  - The function does not return anything.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		free(head);

		head = tmp->next;
	}
}
