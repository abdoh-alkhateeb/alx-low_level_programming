/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask_a = (~n & m);
	unsigned long int mask_b = (n & ~m);
	int i = sizeof(unsigned long int) * 8 - 1;
	unsigned int bit_count = 0;

	for (; i >= 0; i--)
		if ((1UL << i & mask_a) >> i)
			bit_count++;
		else if ((1UL << i & mask_b) >> i)
			bit_count++;

	return (bit_count);
}
