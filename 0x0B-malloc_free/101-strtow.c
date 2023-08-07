#include <stdlib.h>

/**
 * special_strlen - a function that calculates size of string.
 * @str: string.
 *
 * Return: size of string.
 */
int special_strlen(char *str)
{
	int size;

	for (size = 0; str[size] != ' ' && str[size] != '\0'; size++)
		;

	return (size);
}

/**
 * word_count - a function that calculates number of words in a string.
 * @str: string.
 *
 * Return: number of words.
 */
int word_count(char *str)
{
	int i, parsingWord, wordCount;

	for (i = 0, parsingWord = 0, wordCount = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (parsingWord == 1)
				parsingWord = 0;
		}
		else
		{
			if (parsingWord != 1)
			{
				parsingWord = 1;
				wordCount++;
			}
		}
	}

	return (wordCount);
}

/**
 * strtow - a function that splits a string into words.
 * @str: string to split.
 *
 * Return: pointer to an array of strings, null if fails.
 */
char **strtow(char *str)
{
	int i, j, k, wordCount;
	char **wordArray;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wordCount = word_count(str);

	if (wordCount == 0)
		return (NULL);

	wordArray = (char **)malloc((sizeof(char *) * (wordCount + 1)));

	if (wordArray == NULL)
		return (NULL);

	for (i = 0, j = 0; i < wordCount; i++)
	{
		for (; str[j] == ' ' && str[j] != '\0'; j++)
			;

		wordArray[i] = (char *)malloc(sizeof(char) * (1 + special_strlen(str + j)));

		if (wordArray[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(wordArray[k]);

			return (NULL);
		}

		for (k = 0; str[j] != ' ' && str[j] != '\0'; j++)
			wordArray[i][k++] = str[j];

		wordArray[i][k] = '\0';
	}

	wordArray[i] = NULL;

	return (wordArray);
}
