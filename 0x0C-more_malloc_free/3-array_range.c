#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum included value.
 * @max: maximum included value.
 *
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}
