# Pointers, Arrays, and Strings - C Programming Tasks

This repository contains C programs that implement various functions to manipulate pointers, arrays, and strings. The tasks are part of an assignment that focuses on practicing low-level programming concepts.

## Tasks

1. **98 Battery st.**
   - Description: Write a function that takes a pointer to an integer as a parameter and updates the value it points to 98.
   - Function: `void reset_to_98(int *n);`
   - Example:
     ```c
     int n = 402;
     reset_to_98(&n); // n will now be 98
     ```

2. **Don't swap horses in crossing a stream**
   - Description: Write a function that swaps the values of two integers.
   - Function: `void swap_int(int *a, int *b);`
   - Example:
     ```c
     int a = 98, b = 42;
     swap_int(&a, &b); // a will be 42, b will be 98
     ```

3. **This report, by its very length, defends itself against the risk of being read**
   - Description: Write a function that returns the length of a string.
   - Function: `int _strlen(char *s);`
   - Example:
     ```c
     char *str = "My first strlen!";
     int len = _strlen(str); // len will be 16
     ```

4. **I do not fear computers. I fear the lack of them**
   - Description: Write a function that prints a string followed by a new line.
   - Function: `void _puts(char *str);`
   - Example:
     ```c
     char *str = "I do not fear computers.";
     _puts(str); // Output: "I do not fear computers."
     ```

5. **I can only go one way. I've not got a reverse gear**
   - Description: Write a function that prints a string in reverse followed by a new line.
   - Function: `void print_rev(char *s);`
   - Example:
     ```c
     char *str = "I can only go one way.";
     print_rev(str); // Output: ".yaw eno og ylno nac I"
     ```

... (continue with the rest of the tasks)

## Compilation and Testing

To compile and test the functions, follow these steps:

1. Compile the source files using the provided main files and the provided `_putchar.c` file (if needed) using the following command:
   ```sh
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c task-main.c task-function.c -o output-file

