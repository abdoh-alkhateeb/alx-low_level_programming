#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: head of list.
 *
 * Return: sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	if (head != NULL)
	{
		return (sum_listint(head->next) + head->n);
	}

	return (0);
}
