/**
 * check_factor - checks if a given number is prime or not by
 * seeing if it has a factor other than itself.
 * @number: number to check.
 * @factor: factor to check.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_factor(int number, int factor)
{
	if (number == factor)
		return (1);

	if (number % factor == 0)
		return (0);

	return (check_factor(number, factor + 1));
}

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: number to check if prime or not.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_factor(n, 2));
}
