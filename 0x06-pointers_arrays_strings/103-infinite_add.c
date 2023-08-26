#include <string.h>

/**
 * strrev - a function that reverses strings.
 * @str: string to process.
 *
 * Return: reversed string.
 */
char *strrev(char *str)
{
	char *p1, *p2;

	if (!str || !*str)
		return (str);

	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; p1++, p2--)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}

	return (str);
}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first operand buffer.
 * @n2: second operand buffer.
 * @r: result buffer.
 * @size_r: size of result buffer.
 *
 * Return: result buffer, or NULL if it fails.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2);
	int i = len1 - 1, j = len2 - 1, k = 0;
	int sum, carry = 0;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (NULL);

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';

		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
	}

	if (k == size_r)
	{
		r[k - 1] = '\0';
		return (NULL);
	}

	r[k] = '\0';

	strrev(r);

	return (r);
}
