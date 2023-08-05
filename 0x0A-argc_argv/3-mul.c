#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 (always) success.
 */
int main(int argc, char *argv[])
{
	int i, product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	product = 1;

	for (i = 1; i < argc; i++)
	{
		product = product * atoi(argv[i]);
	}

	printf("%d\n", product);

	return (0);
}
