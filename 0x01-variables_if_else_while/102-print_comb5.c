#include <stdio.h>

/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i < '0' + 10; i++)
	{
		for (j = '0'; j < '0' + 10; j++)
		{
			for (k = '0'; k < '0' + 10; k++)
			{
				for (l = '0'; l < '0' + 10; l++)
				{
					if ((((k - '0') * 10 + (l - '0')) - ((i - '0') * 10 + (j - '0'))) <= 0)
						continue;

					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (i != '9' || j != '8' || k != '9' || l != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
