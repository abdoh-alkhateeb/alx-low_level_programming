/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to memory block.
 * @b: byte to write.
 * @n: number of bytes to write with b.
 *
 * Return: pointer to memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
