#include <stdio.h>

/**
* main - entry point.
*
* Return: always 0 (success).
*/
int main(void)
{
	int i;

	for (i = '0'; i < '0' + 10; i++)
	{
		putchar(i);
		if (i == '9')
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
