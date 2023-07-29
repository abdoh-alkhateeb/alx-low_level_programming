/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to string.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
