#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * Description: a header file that includes function
 * prototypes for the current project.
 */
int _putchar(char);
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);
char **strtow(char *);

#endif /* _MAIN_H_ */
