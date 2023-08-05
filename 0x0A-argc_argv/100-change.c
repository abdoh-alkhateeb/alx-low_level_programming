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
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents)
	{
		if (cents >= 25)
			cents -= 25;

		else if (cents >= 10)
			cents -= 10;

		else if (cents >= 5)
			cents -= 5;

		else if (cents >= 2)
			cents -= 2;

		else if (cents >= 1)
			cents -= 1;

		coins += 1;
	}

	printf("%d\n", coins);
	return (0);
}
