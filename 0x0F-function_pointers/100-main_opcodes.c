#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of a program that prints
 * the opcodes of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: void.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *main_addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_addr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_addr[i]);

		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
