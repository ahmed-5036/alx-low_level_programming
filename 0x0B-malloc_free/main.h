#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Task 0: create_array */
char *create_array(unsigned int size, char c);

/* Task 1: _strdup */
char *_strdup(char *str);

/* Task 2: str_concat */
char *str_concat(char *s1, char *s2);

/* Task 3: alloc_grid */
int **alloc_grid(int width, int height);

/* Task 4: free_grid */
void free_grid(int **grid, int height);

/* _putchar - Provided putchar function */
int _putchar(char c);

#endif /* MAIN_H */
