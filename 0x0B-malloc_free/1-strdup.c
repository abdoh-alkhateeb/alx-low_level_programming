#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string to copy.
 *
 * Return: pointer to string copy, NULL if size is zero or fails.
 */
char *_strdup(char *str)
{
	char *newstr;
	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	newstr = (char *)malloc(sizeof(char) * size + 1);

	if (newstr == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		newstr[size] = str[size];

	newstr[size] = '\0';

	return (newstr);
}
