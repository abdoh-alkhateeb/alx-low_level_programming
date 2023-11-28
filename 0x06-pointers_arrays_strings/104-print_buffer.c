#include <stdio.h>

/**
 * print_buffer - Prints contents of buffer in hexadecimal and ASCII format.
 *
 * @b: Pointer to the buffer to be printed.
 * @size: Size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10 && i + j < size; j++)
		{
			printf("%02x", b[i + j]);

			if ((j + 1) % 2 == 0)
				printf(" ");
		}

		for (; j < 11 && i + j >= size; j++)
			printf("  ");

		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] < 32)
				printf(".");

			else
				printf("%c", b[i + j]);
		}

		printf("\n");
	}
}
