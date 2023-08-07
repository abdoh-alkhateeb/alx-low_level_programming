#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of memory block.
 * @c: character to use to fill memory.
 *
 * Return: pointer to memory block, NULL if size is zero or fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr != NULL)
		for (i = 0; i < size; i++)
			arr[i] = c;

	return (arr);
}
