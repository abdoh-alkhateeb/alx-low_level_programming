#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: pointer  to string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, n;

	for (n = 0; str[n] != '\0'; n++)
		;

	for (i = (n % 2 == 0 ? n / 2 : n / 2 + 1); i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
