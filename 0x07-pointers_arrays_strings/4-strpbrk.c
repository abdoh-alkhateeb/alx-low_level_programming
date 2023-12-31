/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: a pointer to the first occurrence in s of any of the
 * characters that are part of accept, or a null pointer if there are
 * no matches.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	}

	return (0);
}
