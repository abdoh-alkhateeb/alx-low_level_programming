#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head of list.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);

	*head = NULL;
}

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
		free_listint(head->next);

		free(head);
	}
}
