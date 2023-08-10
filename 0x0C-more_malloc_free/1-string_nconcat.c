#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters to use from s2.
 *
 * Return: a pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 * If it fails, it returns null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t n1, n2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;

	for (n2 = 0; s2[n2] != '\0'; n2++)
		;

	if (n < n2)
		n2 = n;

	s = malloc(sizeof(char) * (n1 + n2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
		s[i] = s1[i];

	for (j = 0; j < n2; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
