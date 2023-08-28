#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	if (h != NULL)
	{
		printf("%d\n", h->n);

		return (print_listint(h->next) + 1);
	}

	return (0);
}
