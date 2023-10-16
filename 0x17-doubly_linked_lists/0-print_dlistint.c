#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all elements of dlistint_t list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++, h = h->next)
		printf("%d\n", h->n);

	return (count);
}
