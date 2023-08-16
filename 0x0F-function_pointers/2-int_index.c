#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of parameters.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: index on success, or -1 when not found or on failure.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
