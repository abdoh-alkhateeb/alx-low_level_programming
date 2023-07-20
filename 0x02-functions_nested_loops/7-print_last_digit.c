#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number to check
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int res;

	if (n < 0)
		n = -n;

	res = n % 10;

	if (res < 0)
		res = -res;

	_putchar('0' + res);
	return (res);
}
