#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	if (h != NULL)
	{
		return (listint_len(h->next) + 1);
	}

	return (0);
}
