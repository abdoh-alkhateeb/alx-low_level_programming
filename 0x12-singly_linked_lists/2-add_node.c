#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list.
 * @head: pointer to pointer to head of list.
 * @str: string to use for new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = (list_t *)malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);

	p->str = strdup(str);

	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	p->len = strlen(str);
	p->next = *head;

	*head = p;

	return (p);
}
