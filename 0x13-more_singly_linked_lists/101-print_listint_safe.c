#include "lists.h"

/**
 * print_listint_safe - check the code
 * @head: const listint_t of head of list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	long int diff;
	size_t num = 0;

	if (!head)
		exit(98);
	while (head)
	{
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		diff = head - head->next;
		head = head->next;
		if (diff <= 0)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (num);
}
