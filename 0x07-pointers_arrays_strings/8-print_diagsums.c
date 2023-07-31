#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: pointer to array.
 * @size: size of array.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, actualSize, sumMain, sumSec;

	actualSize = size * size;
	sumMain = 0;
	sumSec = 0;

	for (i = 0; i < actualSize; i += size + 1)
		sumMain += a[i];

	for (i = size - 1; i < actualSize - 1; i += size - 1)
		sumSec += a[i];

	printf("%d, %d\n", sumMain, sumSec);
}
