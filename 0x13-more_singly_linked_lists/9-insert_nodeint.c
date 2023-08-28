#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: pointer to pointer to head.
 * @idx: index of the list where the new node should be added.
 * @n: value to be contained in new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (idx == 0)
		return (add_nodeint(head, n));

	{
		listint_t *p = get_nodeint_at_index(*head, idx - 1);

		if (p == NULL)
			return (NULL);

		return (add_nodeint(&(p->next), n));
	}
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

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to pointer to head of list.
 * @n: number that will be contained in the new node in the list.
 *
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head == NULL)
		return (NULL);

	{
		listint_t *p = (listint_t *)malloc(sizeof(listint_t));

		if (p == NULL)
			return (NULL);

		p->n = n;
		p->next = *head;

		*head = p;

		return (p);
	}
}
