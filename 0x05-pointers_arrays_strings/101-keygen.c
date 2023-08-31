#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * calc_checksum - a function that calculates the checksum of a string.
 * @str: string to process.
 *
 * Return: checksum of provided string.
 */
unsigned int calc_checksum(char *str)
{
	if (str == NULL)
		return (0);

	{
		unsigned int i, sum;

		for (i = 0, sum = 0; str[i] != '\0'; i++)
			sum += str[i];

		return (sum);
	}
}

/**
 * randomize_str - a function that stores random characters in string.
 * @str: string to process.
 *
 * Return: nothing.
 */
void randomize_str(char *str)
{
	unsigned int i;

	for (i = 0; i < 36; i++)
		if (rand() % 2)
			str[i] = (rand() % 2 ? 'a' : 'A') + rand() % 26;
		else
			str[i] = '0' + rand() % 10;

	str[i] = '\0';
}

/**
 * main - a program that generates random valid passwords for the program.
 *
 * Return: 0 (success) always.
 */
int main(void)
{
	char str[36];

	srand((unsigned int)time(NULL));

	while (1)
	{
		randomize_str(str);

		if (calc_checksum(str) == 2772)
		{
			printf("%s", str);
			break;
		}
	}

	return (0);
}
