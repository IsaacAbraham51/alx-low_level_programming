#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void free_grid(int **grid, int height);
void *malloc_checked(unsigned int b);
char *_strdup(char *str);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _putchar(char c);
char *create_array(unsigned int size, char c);
int **aloc_grid(int width, int height);
char *argstostr(int ac, char **av);

#endif /* MAIN_H */
