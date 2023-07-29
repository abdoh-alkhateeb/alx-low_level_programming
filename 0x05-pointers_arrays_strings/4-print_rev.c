#include "main.h"

/**
 * _print_rev - a function that prints a string in reverse.
 * @s: pointer to string.
 *
 * Return: void.
 */
void _print_rev(char *s)
{
	if (*s)
	{
		_print_rev(s + 1);
		_putchar(*s);
	}
}

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	_print_rev(s);
	_putchar('\n');
}
