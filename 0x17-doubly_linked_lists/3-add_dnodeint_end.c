#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a node at end of dlistint_t list.
 * @head: head of list.
 * @n: data of new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *p = *head;

	if (head == NULL || node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		node->prev = NULL;
	}
	else
	{
		while (p->next)
			p = p->next;

		p->next = node;
		node->prev = p;
	}

	return (node);
}
