#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @src: the string to copy.
 * @dest: the string to copy to its end;
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
		dest[i++] = src[j];

	dest[i] = '\0';

	return (dest);
}
