#include <stdio.h>

/**
 * main - entry point of program.
 *
 * Return: always 0 (success).
 */
int main(void)
{
	int i;
	int result;

	for (i = 0, result = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}

	printf("%d\n", result);

	return (0);
}
