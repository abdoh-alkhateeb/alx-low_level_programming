/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to process.
 * @index: index starting from 0 of the bit you want to get.
 *
 * Return: value of the bit at index index, or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (((1UL << index) & n) >> index);
}
