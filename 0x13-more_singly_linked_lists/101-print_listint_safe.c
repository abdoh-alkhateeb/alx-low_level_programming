#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * printed - a function that checks whether node was already
 * printed or not.
 * @h: first node of list.
 * @l: last node of list.
 * @n: node to check.
 *
 * Return: 1 if true, 0 if false.
 */
int printed(const listint_t *h, const listint_t *l, const listint_t *n)
{
	while (h != l)
	{
		if (h == n)
			return (1);

		h = h->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: first node in the list.
 *
 * Return: number of nodes in the list.
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		if (printed(head, current, current->next))
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		current = current->next;
	}

	return (node_count);
}
