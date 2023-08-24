# Pointers, Arrays, and Strings - Project

This project focuses on practicing the concepts of pointers, arrays, and strings in the C programming language. It includes several tasks that involve string manipulation, array operations, and pointer usage. Each task provides a clear learning objective and requires writing functions to accomplish specific goals.

## Tasks

### Task 0: strcat

Write a function `_strcat` that concatenates two strings. It appends the `src` string to the `dest` string, overwriting the terminating null byte at the end of `dest`, and then adds a terminating null byte.

### Task 1: strncat

Write a function `_strncat` that concatenates two strings, similar to `_strcat`, but it will use at most `n` bytes from `src`. `src` does not need to be null-terminated if it contains `n` or more bytes.

### Task 2: strncpy

Write a function `_strncpy` that copies a string from `src` to `dest` with a maximum of `n` bytes. The function should work exactly like the standard library function `strncpy`.

### Task 3: strcmp

Write a function `_strcmp` that compares two strings. It should return the difference between ASCII values of the first differing characters in the strings.

### Task 4: Reverse Array

Implement a function `reverse_array` that reverses the content of an array of integers. The function takes an array and the number of elements in the array as parameters.

### Task 5: string_toupper

Write a function `string_toupper` that converts all lowercase letters in a string to uppercase.

### Task 6: cap_string

Implement a function `cap_string` that capitalizes the first letter of each word in a string. Words are separated by specific delimiters: space, tabulation, new line, comma, semicolon, period, exclamation mark, question mark, double quotes, parentheses, and curly braces.

### Task 7: leet

Write a function `leet` that encodes a string into "1337" text. In this encoding, the letters 'a' and 'A' are replaced with '4', 'e' and 'E' are replaced with '3', 'o' and 'O' are replaced with '0', 't' and 'T' are replaced with '7', and 'l' and 'L' are replaced with '1'.

## Requirements

- Code must follow the [Betty coding style guidelines](https://github.com/holbertonschool/Betty/wiki).
- Code will be compiled using `gcc` on Ubuntu 20.04 LTS with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Functions must not use the standard library functions except for `write` and `_putchar`.
- No global variables are allowed.
- No more than 5 functions should be present in a single file.
- A `main.h` header file must contain the function prototypes.
- A `README.md` file should provide an overview of the project and explanations for each task.

Feel free to test your functions using the provided `main.c` files for each task
