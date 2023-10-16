#include <stdlib.h>
#include "lists.h"

/**
 * recursive_delete_at_index - a function that deletes node at index
 * of dlist recursively.
 * @head: head of list.
 * @index: index of node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int recursive_delete_at_index(dlistint_t **head, int index)
{
	if (*head == NULL)
		return (-1);

	if (index < 0)
		return (-1);
	else if (index == 0)
	{
		dlistint_t *p = *head;

		*head = (*head)->next;

		if (*head)
			(*head)->prev = p->prev;

		free(p);

		return (1);
	}
	else
		return (recursive_delete_at_index(&((*head)->next), index - 1));
}

/**
 * delete_dnodeint_at_index - a function that deletes node at index of
 * dlistint_t list.
 * @head: head of list.
 * @index: index of node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	return (recursive_delete_at_index(head, index));
}
