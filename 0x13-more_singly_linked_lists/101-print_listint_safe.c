#include "lists.h"

/**
 * print_listint_safe - check the code
 * @head: const listint_t of head of list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	const listint_t *visited[60000];
	int i, j;

	temp = head;
	i = 0;
	while (temp != NULL)
	{
		j = 0;
		while (j < i)
		{
			if (temp == visited[j])
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (i);
			}
			j++;
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		visited[i] = temp;
		i++;
		temp = temp->next;
		if (temp == NULL)
			exit (98);
	}
	return (i);
}
