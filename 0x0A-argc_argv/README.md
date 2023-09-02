# 0x0A-argc_argv

This project consists of C programs that demonstrate the use of `argc` and `argv` in the `main` function.

## Table of Contents
- [Description](#description)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Coding Style](#coding-style)
- [Author](#author)

## Description

The C programs in this project showcase various functionalities related to command-line argument handling using `argc` (argument count) and `argv` (argument vector).

## Files

The project is organized into the following files:

- `0-whatsmyname.c`: Prints the name of the program.
- `1-args.c`: Prints the number of arguments passed.
- `2-args.c`: Prints all arguments passed.
- `3-mul.c`: Multiplies two numbers passed as arguments.
- `4-add.c`: Adds positive numbers passed as arguments.
- `main.h`: Header file containing function prototypes.

## Compilation

To compile each C file, you can use the following `gcc` command:

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <output_filename>

