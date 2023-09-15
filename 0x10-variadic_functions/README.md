# Variadic Functions

This project contains C functions that demonstrate the use of variadic functions in the C programming language. Variadic functions allow you to work with a variable number of arguments in a function.

## Table of Contents

- [Requirements](#requirements)
- [Task Descriptions](#task-descriptions)
  - [Task 0: Beauty is variable, ugliness is constant](#task-0-beauty-is-variable-ugliness-is-constant)
  - [Task 1: To be is to be the value of a variable](#task-1-to-be-is-to-be-the-value-of-a-variable)
  - [Task 2: One woman's constant is another woman's variable](#task-2-one-womans-constant-is-another-womans-variable)
  - [Task 3: To be is a to be the value of a variable](#task-3-to-be-is-a-to-be-the-value-of-a-variable)

## Requirements

- The code is written in C.
- All code files are compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code files should follow the Betty style guidelines.
- No global variables are used.
- The only C standard library functions allowed are `malloc`, `free`, and `exit`.
- Allowed macros include `va_start`, `va_arg`, and `va_end`.
- The `_putchar` function can be used.
- Each code file should contain no more than 5 functions.
- Prototypes of functions and the `_putchar` function are included in the `variadic_functions.h` header file.
- Header files are protected using include guards.

## Task Descriptions

### Task 0: Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

Prototype: `int sum_them_all(const unsigned int n, ...);`

If `n` == 0, return 0.

### Task 1: To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`

Where `separator` is the string to be printed between numbers, and `n` is the number of integers passed to the function.

If `separator` is NULL, don’t print it.

Print a new line at the end of your function.

### Task 2: One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`

Where `separator` is the string to be printed between the strings, and `n` is the number of strings passed to the function.

If `separator` is NULL, don’t print it.

If one of the strings is NULL, print `(nil)` instead.

Print a new line at the end of your function.

### Task 3: To be is a to be the value of a variable

Write a function that prints anything.

Prototype: `void print_all(const char * const format, ...);`

Where `format` is a list of types of arguments passed to the function.

- `c`: char
- `i`: integer
- `f`: float
- `s`: char * (if the string is NULL, print `(nil)` instead)

Any other character should be ignored.

You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`.

You can use a maximum of 2 while loops and 2 if statements.

You can declare a maximum of 9 variables.

You are allowed to use `printf`.

Print a new line at the end of your function.

