#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function that frees dlistint_t list.
 * @head: head of list.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
