#include "lists.h"

/**
 * dlistint_len - a function that returns elements count in dlistint_t list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++, h = h->next)
		;

	return (count);
}
