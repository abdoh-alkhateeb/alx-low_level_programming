/**
 * check_root - checks root for a given square.
 * @root: root to check.
 * @square: number to find square root for.
 *
 * Return: natural square root of square if exists, -1 otherwise.
 */
int check_root(int root, int square)
{
	if (root * root > square)
		return (-1);

	if (root * root == square)
		return (root);

	return (check_root(root + 1, square));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: number to calculate square root for.
 *
 * Return: result.
 */
int _sqrt_recursion(int n)
{
	return (check_root(1, n));
}
