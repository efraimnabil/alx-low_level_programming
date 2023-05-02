#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL, *temp2 = NULL;
	size_t i = 0, j;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
		temp2 = head;
		j = 0;
		while (j < i)
		{
			if (temp == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (i);
			}
			temp2 = temp2->next;
			j++;
		}
		if (!temp)
			exit(98);
	}
	return (i);
}
