#include <stdio.h>

/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
	int i, j, k;

	for (i = '0'; i < '0' + 10; i++)
	{
		for (j = '0'; j < '0' + 10; j++)
		{
			for (k = '0'; k < '0' + 10; k++)
			{
				if ((k - j) <= 0 || (j - i) <= 0)
					continue;

				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
