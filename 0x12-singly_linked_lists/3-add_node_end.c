#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the
 * end of a list_t list.
 * @head: pointer to pointer to head of list.
 * @str: string to use for new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (*head == NULL)
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
		p->next = NULL;

		*head = p;

		return (p);
	}
	else
		return (add_node_end(&((*head)->next), str));
}
