#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int sequence[98];

	sequence[0] = 1;
	sequence[1] = 2;

	printf("1, 2, ");

	for (i = 2; i < 92; i++)
	{
		sequence[i] = sequence[i - 1] + sequence[i - 2];
		printf("%lu, ", sequence[i]);
	}

	for (i = 92; i < 98; i++)
	{
		sequence[i] = sequence[i - 1] + sequence[i - 2];
		printf(i == 97 ? "%lu\n" : "%lu, ", sequence[i]);
	}

	return (0);
}
