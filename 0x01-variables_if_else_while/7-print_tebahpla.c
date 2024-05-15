#include <stdio.h>

/**
* main - entry point.
*
* Return: always 0 (success).
*/
int main(void)
{
	char i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
