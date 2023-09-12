# Structures and Typedef

This repository contains a C programming project that focuses on working with structures and typedef. The tasks involve defining a new struct, initializing it, printing its contents, and managing memory. Below are the details of each task:

## Task 0: Poppy

Define a new type `struct dog` with the following elements:
- `name` of type `char *`
- `age` of type `float`
- `owner` of type `char *`

## Task 1: A dog is the only thing on earth that loves you more than you love yourself

Write a function `init_dog` that initializes a variable of type `struct dog` with provided values.

## Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function `print_dog` that prints the contents of a `struct dog`.

## Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`.

## Task 4: A door is what a dog is perpetually on the wrong side of

Write a function `new_dog` that creates a new `struct dog`. The function should copy the provided `name` and `owner` strings.

## Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function `free_dog` that frees memory allocated for a `struct dog` and its string members.

## Compilation

To compile the C files for each task, you can use the following command:
```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main.c> <task_file.c> -o <output_executable>

