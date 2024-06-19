#include "search_algos.h"

/**
 * linear_search - Performs linear search on an array.
 *
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @value: Value to look for.
 *
 * Return: Index of the value in the array if found, -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
