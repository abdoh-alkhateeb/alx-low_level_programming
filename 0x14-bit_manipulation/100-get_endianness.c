#include <limits.h>

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	return (((unsigned char)(UCHAR_MAX + 1) & UCHAR_MAX) == UCHAR_MAX ? 0 : 1);
}
