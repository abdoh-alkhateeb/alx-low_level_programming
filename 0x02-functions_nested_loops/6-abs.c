#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: the number to check
 *
 * Return: -n if n is negative, n if n is positive
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
