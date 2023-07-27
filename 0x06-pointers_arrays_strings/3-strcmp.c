#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if equal
 *		  >0 if the first non-matching character
 *			 in str1 is greater (in ASCII) than that of str2.
 *		  <0 if the first non-matching character
 *			 in str1 is lower (in ASCII) than that of str2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}

	return (s1[i] - s2[i]);
}
