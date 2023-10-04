# File I/O Project

This repository contains a set of C functions and a program for handling file input and output (I/O) operations. These functions enable you to read, create, append to, and copy files in a POSIX-compliant environment. Additionally, there is a program to display information about ELF (Executable and Linkable Format) headers in ELF files.

## Table of Contents

- [File I/O Project](#file-io-project)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Requirements](#requirements)
  - [Usage](#usage)
  - [Compilation](#compilation)
  - [Functions](#functions)
  - [Examples](#examples)
  - [Contributing](#contributing)
  - [License](#license)

## Description

This project provides solutions to various tasks related to file I/O operations in the C programming language. The tasks include reading text from a file, creating a new file, appending text to an existing file, and copying the contents of one file to another. Additionally, there is a program that displays information about ELF headers in ELF files.

## Requirements

- The code is designed to be compiled and run on Ubuntu 20.04 LTS using GCC with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a newline character.
- The code must follow the Betty style, and it will be checked using `betty-style.pl` and `betty-doc.pl`.
- Global variables are not allowed.
- Only the C standard library functions `malloc`, `free`, and `exit` are permitted. Functions like `printf`, `puts`, `calloc`, and `realloc` are forbidden.
- The allowed system calls are `read`, `write`, `open`, `close`.
- `_putchar` is allowed, but you don't need to push `_putchar.c` as it will be provided.

## Usage

To use the functions provided in this project, include the `main.h` header file in your C code. The prototypes for the functions and `_putchar` are defined in `main.h`.

## Compilation

You can compile the provided functions by using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 your_file.c -o your_output

