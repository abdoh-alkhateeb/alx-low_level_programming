#include "main.h"

/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: void.
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '0' + 10; i++)
		_putchar(i);

	_putchar('\n');
}
