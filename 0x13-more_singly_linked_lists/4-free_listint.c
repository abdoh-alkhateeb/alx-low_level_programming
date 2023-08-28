#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head of list.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);

		free_listint(head->next);
	}
}
