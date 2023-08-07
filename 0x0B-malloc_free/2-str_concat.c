#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated.
 * In case if failure, NULL is returned.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
		for (; s1[len1] != '\0'; len1++)
			;
	if (s2 != NULL)
		for (; s2[len2] != '\0'; len2++)
			;

	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	if (s1 != NULL)
		for (len1 = 0; s1[len1] != '\0'; len1++)
			result[len1] = s1[len1];

	if (s2 != NULL)
		for (len2 = 0; s2[len2] != '\0'; len2++)
			result[len1 + len2] = s2[len2];

	result[len1 + len2] = '\0';

	return (result);
}
