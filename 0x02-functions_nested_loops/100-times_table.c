#include "main.h"

/**
 * print_times_table - a function that prints
 * the n times table, starting with 0.
 * @n: the number which will have its times table printed.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, k, result, is_significant;
	char buffer[4];

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				for (k = 0, result = i * j; k < 4; k++)
				{
					buffer[4 - k - 1] = '0' + result % 10;
					result /= 10;
				}

				for (k = 0, is_significant = 0; k < 4; k++)
				{
					if (buffer[k] == '0' && !is_significant && k != 3)
						_putchar(' ');
					else
					{
						is_significant = 1;
						_putchar(buffer[k]);
					}
				}
			}

			if (j != n)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
