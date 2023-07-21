#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int sequence[50];

	sequence[0] = 1;
	sequence[1] = 2;

	printf("1, 2, ");

	for (i = 2; i < 50; i++)
	{
		sequence[i] = sequence[i - 1] + sequence[i - 2];
		printf(i == 49 ? "%ld\n" : "%ld, ", sequence[i]);
	}

	return (0);
}
