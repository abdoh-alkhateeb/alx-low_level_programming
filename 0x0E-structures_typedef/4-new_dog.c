#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - a function that copies a string.
 * @str: string to copy.
 *
 * Return: pointer to string copy, or NULL if fails or str passed
 * is NULL.
 */
char *_strcpy(char *str)
{
	size_t len;
	char *cpy;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		cpy[len] = str[len];

	cpy[len] = '\0';

	return (cpy);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of owner of dog.
 *
 * Return: pointer to dog struct, or NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = _strcpy(name);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = _strcpy(owner);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}
