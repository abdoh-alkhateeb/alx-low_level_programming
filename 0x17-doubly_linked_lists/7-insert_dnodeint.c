#include <stdlib.h>
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

/**
 * insert_dnodeint_at_index - a function that inserts node at given position.
 * @h: head of list.
 * @idx: index of new node.
 * @n: data of new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	{
		size_t len = dlistint_len(*h);

		if (idx > len)
			return (NULL);
		else if (idx == len)
			return (add_dnodeint_end(h, n));

		{
			size_t i;
			dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t)), *p = *h;

			if (node == NULL)
				return (NULL);

			node->n = n;

			for (i = 0; p; i++, p = p->next)
			{
				if (i == idx)
				{
					node->next = p;
					node->prev = p->prev;
					p->prev->next = node;
					p->prev = node;
					return (node);
				}
			}

			free(node);
			return (NULL);
		}
	}
}
