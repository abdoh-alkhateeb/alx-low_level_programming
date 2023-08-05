#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - entry point of program.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 (always) success.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			char *str;

			for (j = 0, str = argv[i]; str[j] != '\0'; j++)
			{
				if (!(str[j] >= '0' && str[j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}

	for (i = 1, sum = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
