#include "lists.h"

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
