#ifndef _MAIN_H_
#define _MAIN_H_
#include <sys/types.h>

int _putchar(int);
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);

#endif /* _MAIN_H_ */