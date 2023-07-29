#include <stdio.h>

/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: pointer to array of integers.
 * @n: length of array.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf(i == n - 1 ? "%d\n" : "%d, ", a[i]);

	if (n <= 0)
		printf("\n");
}
