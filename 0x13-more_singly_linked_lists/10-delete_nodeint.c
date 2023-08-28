#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to pointer to head of list.
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = get_nodeint_at_index(*head, index);

	if (p == NULL)
		return (-1);

	if (p == *head)
		*head = (*head)->next;
	else
	{
		listint_t *q = get_nodeint_at_index(*head, index - 1);

		q->next = p->next;
	}

	free(p);

	return (1);
}

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: head of list.
 * @index: index of the nth node.
 *
 * Return: address of nth node of a listint_t linked list,
 * or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	else if (index == 0)
		return (head);
	else
		return (get_nodeint_at_index(head->next, index - 1));
}
