#include <stdio.h>

/**
* main - entry point.
*
* Return: always 0 (success).
*/
int main(void)
{
	int i, j;

	for (i = '0'; i < '0' + 10; i++)
	{
		for (j = '0'; j < '0' + 10; j++)
		{
			if (i == j || j < i)
				continue;

			putchar(i);
			putchar(j);

			if (!(i == '8' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
