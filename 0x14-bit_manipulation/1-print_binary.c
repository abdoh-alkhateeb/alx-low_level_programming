#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to process
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i = 31;
	unsigned int mask = 1;

	while ((mask << i & n) == 0 && i >= 0)
		i--;

	if (i < 0)
		_putchar('0');
	else
		for (; i >= 0; i--)
			_putchar('0' + ((mask << i & n) >> i));
}
