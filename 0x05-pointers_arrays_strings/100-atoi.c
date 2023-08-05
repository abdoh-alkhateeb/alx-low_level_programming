#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string input.
 *
 * Return: integer result.
 */
int _atoi(char *s)
{
	int i, num, sign;

	for (i = 0, sign = 1; !(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'; i++)
		if (s[i] == '-')
			sign *= -1;

	for (num = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num >= INT_MAX / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			num = num * 10 + s[i] - '0';
		}
		else
			break;
	}

	return (num * sign);
}
