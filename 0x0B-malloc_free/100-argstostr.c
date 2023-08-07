#include <stdlib.h>

/**
 * _strlen - a function that calculates size of string.
 * @str: string.
 *
 * Return: size of string.
 */
size_t _strlen(char *str)
{
	unsigned int size;

	if (str == NULL)
		return (0);

	for (size = 0; str[size] != '\0'; size++)
		;

	return (size);
}

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer to the resultant string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, totalSize;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, totalSize = 0; i < ac; i++)
		totalSize += _strlen(av[i]);

	result = (char *)malloc(sizeof(char) * (totalSize + ac + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
		if (_strlen(av[i]))
		{
			for (j = 0; av[i][j] != '\0'; j++)
				result[k++] = av[i][j];

			result[k++] = '\n';
		}

	result[k] = '\0';

	return (result);
}
