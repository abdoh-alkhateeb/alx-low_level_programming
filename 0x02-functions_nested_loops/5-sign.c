#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is +, -1 if n is -, and 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
