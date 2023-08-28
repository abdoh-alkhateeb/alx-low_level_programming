#include "lists.h"
#include <stdlib.h>

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
