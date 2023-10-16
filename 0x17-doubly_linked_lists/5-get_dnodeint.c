#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns nth node of dlistint_t list.
 * @head: head of list.
 * @index: index of node.
 *
 * Return: address of node, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	for (count = 0; head; count++, head = head->next)
		if (index == count)
			return (head);

	return (NULL);
}
