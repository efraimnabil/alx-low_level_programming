#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;

    if (!head)
        return (NULL);

    for (i = 0; i < index; ++i)
    {
        if (!head->next)
            return (NULL);
        head = head->next;
    }

    return (head);
}