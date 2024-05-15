#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: integer to print.
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int temp, divisor, digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	temp = n;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar('0' + digit);

		n %= divisor;
		divisor /= 10;
	}
}
