/**
 * check_string - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string to check.
 * @l: beginning of string.
 * @r: end of string.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_string(char *s, int l, int r)
{
	if (s[l] != s[r])
		return (0);

	if (l < r + 1)
		return (check_string(s, l + 1, r - 1));

	return (1);
}

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string to check.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;

	if (n == 0)
		return (1);

	return (check_string(s, 0, n - 1));
}
