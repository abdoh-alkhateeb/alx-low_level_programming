#include <stdio.h>

/**
 * first - a function that prints two lines of predefined text.
 */
__attribute__((constructor))
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
