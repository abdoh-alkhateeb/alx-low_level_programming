#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: pointer to string to transform.
 *
 * Return: pointer to transformed string.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z' &&
		(i == 0 || str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '?' ||
		str[i - 1] == '!' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '"'))
			str[i] = 'A' + (str[i] - 'a');

	return (str);
}
