#include <stdio.h>

/**
* main - entry point.
*
* Return: always 0 (success).
*/
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}

	putchar('\n');

	return (0);
}
