#ifndef _HEADER_
#define _HEADER_
#include <stddef.h>

/**
 * Description: a header file that includes function
 * prototypes for the current project.
 */
int _putchar(char);
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*)(int));

#endif
