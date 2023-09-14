#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Prototype for _putchar */
int _putchar(char c);

/* Task 0 */
void print_name(char *name, void (*f)(char *));

/* Task 1 */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Task 2 */
int int_index(int *array, int size, int (*cmp)(int));

/* Task 3 (Calculator) */
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* FUNCTION_POINTERS_H */

