#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list,and returns the head node’s data (n).
 * @head: pointer to pointer to head of list.
 *
 * Return: head node’s data, or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	if (head == NULL)
		return (0);

	{
		listint_t *p = *head;
		int n = (*head)->n;

		if (*head == NULL)
			return (0);

		*head = (*head)->next;

		free(p);

		return (n);
	}
}
