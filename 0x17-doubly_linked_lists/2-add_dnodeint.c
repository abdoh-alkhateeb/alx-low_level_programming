#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds node at beginning of dlistint_t list.
 * @head: head of list.
 * @n: data of new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL || node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head)
		(*head)->prev = node;

	*head = node;

	return (node);
}
