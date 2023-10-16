#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of data of dlistint_t list.
 * @head: head of list.
 *
 * Return: sum, otherwise 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
