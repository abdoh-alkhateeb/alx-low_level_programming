#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @src: the string to copy.
 * @dest: the string to copy to to.
 * @n: number of characters to copy.
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}

	for (i = i + 1; i < n; i++)
		dest[i] = 0;

	return (dest);
}
