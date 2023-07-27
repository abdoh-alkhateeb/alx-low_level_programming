#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: pointer to string to transform.
 *
 * Return: pointer to transformed string.
 */
char *leet(char *str)
{
	int i, j;

	char x[] = {'a', 'e', 'o', 't', 'l'};
	char y[] = {4, 3, 0, 7, 1};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (str[i] == x[j] || str[i] == x[j] - ('a' - 'A'))
				str[i] = '0' + y[j];
	}

	return (str);
}
