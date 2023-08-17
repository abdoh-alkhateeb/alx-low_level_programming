#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: pointer to string to transform.
 *
 * Return: pointer to transformed string.
 */
char *rot13(char *str)
{
	int i, j;

	char origin[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; origin[j] != '\0'; j++)
		{
			if (str[i] == origin[j])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}

	return (str);
}
