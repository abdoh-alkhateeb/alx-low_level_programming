#include <string.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if b is NULL or here is one or more chars in
 * the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	{
		int i, j;
		unsigned int uint = 0;

		for (i = strlen(b) - 1, j = 0; i >= 0; i--, j++)
		{
			if (b[i] == '0' || b[i] == '1')
				uint += (b[i] == '1') ? 1 << j : 0;
			else
				return (0);
		}

		return (uint);
	}
}
