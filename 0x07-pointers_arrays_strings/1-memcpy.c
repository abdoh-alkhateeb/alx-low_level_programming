/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer to dest memory block.
 * @src: pointer to src memory block.
 * @n: number of bytes to copy.
 *
 * Return: pointer to dest memory block.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
