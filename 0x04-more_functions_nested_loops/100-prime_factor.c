#include <stdio.h>
#include <math.h>

/**
 * main - entry point of program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int number, max_factor, i;

	number = 612852475143;

	for (i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			max_factor = number / i;
		}
	}

	printf("%lu\n", max_factor);

	return (0);
}
