#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, n, temp;

	for (n = 0; s[n] != '\0'; n++)
		;

	for (i = 0; i < n / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
}
