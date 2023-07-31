/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to string.
 * @c: character to look for.
 *
 * Return: pointer to first occurrence of character,
 * or NULL if not exists.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}

	return (*s == c ? s : 0);
}
