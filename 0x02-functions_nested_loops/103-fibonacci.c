#include <stdio.h>

/**
 * main - entry point of program.
 *
 * Return: always 0 (success).
 */
int main(void)
{
	int a, b, c;
	long int sum;

	a = 1, b = 2, c = 3;
	sum = 2;

	while (c < 4000000)
	{
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
		c = a + b;
	}

	printf("%ld\n", sum);

	return (0);
}
