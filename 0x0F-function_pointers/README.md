# Function Pointers Project

This project contains C programs that demonstrate the use of function pointers and other C programming concepts. It includes several tasks, each with its own set of requirements.

## Table of Contents
1. [Requirements](#requirements)
2. [Tasks](#tasks)
   - [Task 0: What's my name](#task-0-whats-my-name)
   - [Task 1: If you spend too much time thinking about a thing, you'll never get it done](#task-1-if-you-spend-too-much-time-thinking-about-a-thing-youll-never-get-it-done)
   - [Task 2: To hell with circumstances; I create opportunities](#task-2-to-hell-with-circumstances-i-create-opportunities)
   - [Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at](#task-3-a-goal-is-not-always-meant-to-be-reached-it-often-serves-simply-as-something-to-aim-at)
   - [Task 4: Most hackers are young because young people tend to be adaptable](#task-4-most-hackers-are-young-because-young-people-tend-to-be-adaptable)
3. [Usage](#usage)
4. [Compilation](#compilation)
5. [Author](#author)
6. [License](#license)

## Requirements

- All code is written in C.
- The programs are compiled using GCC with specific options.
- The code adheres to the Betty coding style.
- Function pointers are used to demonstrate various tasks.
- The C standard library functions used are limited to `malloc`, `free`, and `exit`.
- Global variables are not used.
- Header files are included with include guards.
- Each task is separated into its own file with a maximum of 5 functions per file.

## Tasks

### Task 0: What's my name
- Description: Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`

### Task 1: If you spend too much time thinking about a thing, you'll never get it done
- Description: Write a function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`

### Task 2: To hell with circumstances; I create opportunities
- Description: Write a function that searches for an integer in an array.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`

### Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at
- Description: Write a program that performs simple operations on integers.
- Usage: `calc num1 operator num2`

### Task 4: Most hackers are young because young people tend to be adaptable
- Description: Write a program that prints the opcodes of its own main function.
- Usage: `./main number_of_bytes`

## Usage

- Each task can be compiled separately as shown in the provided examples.
- The program's behavior varies depending on the specific task.

## Compilation

- To compile each task, use GCC with the specified options.
- Example: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a`

