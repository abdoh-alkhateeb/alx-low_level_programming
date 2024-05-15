#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @src: the string to copy.
 * @dest: the string to copy to its end.
 * @n: number of characters to copy.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i++] = src[j];

	dest[i] = '\0';

	return (dest);
}
