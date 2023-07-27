#include "main.h"

/**
 * string_toupper - a function that changes
 * all lowercase letters of a string to uppercase.
 * @str: pointer to string to transform.
 *
 * Return: pointer to transformed string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'A' + (str[i] - 'a');

	return (str);
}
