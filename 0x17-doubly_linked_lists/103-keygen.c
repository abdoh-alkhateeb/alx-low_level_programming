#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that generates a key for given user for crackme5.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	size_t i, j, len, sum;
	char *c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);
	key[0] = c[(len ^ 59) & 63];

	for (i = 0, sum = 0; i < len; i++)
		sum += argv[1][i];
	key[1] = c[(sum ^ 79) & 63];

	for (i = 0, j = 1; i < len; i++)
		j *= argv[1][i];
	key[2] = c[(j ^ 85) & 63];

	for (j = argv[1][0], i = 0; i < len; i++)
		if ((char)j <= argv[1][i])
			j = argv[1][i];
	srand(j ^ 14);
	key[3] = c[rand() & 63];

	for (j = 0, i = 0; i < len; i++)
		j += argv[1][i] * argv[1][i];
	key[4] = c[(j ^ 239) & 63];

	for (j = 0, i = 0; (char)i < argv[1][0]; i++)
		j = rand();
	key[5] = c[(j ^ 229) & 63];

	printf("%s\n", key);
	return (0);
}
