#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Task 0: Sum of all parameters */
int sum_them_all(const unsigned int n, ...);

/* Task 1: Print numbers followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Task 2: Print strings followed by a new line */
void print_strings(const char *separator, const unsigned int n, ...);

/* Task 3: Print anything based on a format string */
void print_all(const char * const format, ...);

/* Provided _putchar function */
int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */

