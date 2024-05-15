#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success).
 */
int main(void)
{
	int i;
	unsigned long int sequence[98];
	unsigned int carry[8];

	sequence[0] = 1;
	sequence[1] = 2;

	printf("1, 2, ");

	for (i = 2; i < 92; i++)
	{
		sequence[i] = sequence[i - 1] + sequence[i - 2];
		printf("%lu, ", sequence[i]);
	}

	carry[0] = sequence[i - 2] / 1000000000000000000;
	carry[1] = sequence[i - 1] / 1000000000000000000;

	for (i = 92; i < 98; i++)
	{
		sequence[i - 2] %= 1000000000000000000;
		sequence[i - 1] %= 1000000000000000000;
		sequence[i] = sequence[i - 1] + sequence[i - 2];

		carry[i - 92 + 2] = carry[i - 92] + carry[i - 92 + 1];

		carry[i - 92 + 2] += sequence[i] / 1000000000000000000;
		sequence[i] %= 1000000000000000000;

		printf("%u", carry[i - 92 + 2]);
		printf(i == 97 ? "%lu\n" : "%lu, ", sequence[i]);
	}

	return (0);
}
