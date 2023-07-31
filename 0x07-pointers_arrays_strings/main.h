#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * Description: a header file that includes function
 * prototypes for the current project.
 */
int _putchar(char);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*)[8]);
void print_diagsums(int *, int);

#endif /* _MAIN_H_ */
