/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: length of the initial portion of s
 * containing only characters that appear in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (k = 0; accept[k] != '\0'; k++)
		;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				break;

		if (j == k)
			break;
	}

	return (i);
}
