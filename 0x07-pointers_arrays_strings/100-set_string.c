#include <stddef.h>

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer to pointer to char.
 * @to: pointer to char.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	if (s != NULL)
		*s = to;
}
