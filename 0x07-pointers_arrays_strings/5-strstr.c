/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: string containing the sequence of characters to match.
 *
 * Return: a pointer to the first occurrence of needle in haystack,
 * or a null pointer if needle is not part of haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n, m;

	for (n = 0; haystack[n] != '\0'; n++)
		;
	for (m = 0; needle[m] != '\0'; m++)
		;

	for (i = 0; i <= n - m; i++)
	{
		for (j = 0; j < m; j++)
			if (haystack[i + j] != needle[j])
				break;

		if (j == m)
			return (haystack + i);
	}

	return (0);
}
