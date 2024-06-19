#include "search_algos.h"

/**
 * binary_search - Performs binary search on an array.
 *
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @value: Value to look for.
 *
 * Return: Index of the value in the array if found, -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	return (_binary_search(array, 0, size - 1, value));
}

/**
 * _binary_search - Performs binary search on an array.
 *
 * @array: Pointer to the array.
 * @l: Lower bound.
 * @u: Upper bound.
 * @value: Value to look for.
 *
 * Return: Index of the value in the array if found, -1 otherwise.
 */
int _binary_search(int *array, size_t l, size_t u, int value)
{
	size_t c;

	if (l > u)
		return (-1);

	print_array(array, l, u);

	c = (l + u) / 2;

	if (array[c] < value)
		return (_binary_search(array, c + 1, u, value));
	else if (array[c] > value)
		return (_binary_search(array, l, c - 1, value));
	else
		return (c);
}

/**
 * print_array - Prints an array.
 *
 * @array: Pointer to the array.
 * @l: Lower bound.
 * @u: Upper bound.
 *
 * Return: Nothing.
 */
void print_array(int *array, size_t l, size_t u)
{
	size_t i;

	printf("Searching in array: ");

	for (i = l; i <= u; i++)
	{
		printf("%d", array[i]);

		if (i == u)
			continue;

		printf(", ");
	}

	printf("\n");
}
