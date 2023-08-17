#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters.
 *
 * Return: sum of all paramters or 0 if none is provided.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list nums;

	va_start(nums, n);

	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}
