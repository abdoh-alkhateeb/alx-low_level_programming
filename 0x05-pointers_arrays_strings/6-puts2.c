#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer  to string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i, n;

	for (n = 0; str[n] != '\0'; n++)
		;

	for (i = 0; i < n; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
