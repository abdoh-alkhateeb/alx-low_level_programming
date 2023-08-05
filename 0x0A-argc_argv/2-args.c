#include <stdio.h>

/**
 * main - entry point of program.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 (always) success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
