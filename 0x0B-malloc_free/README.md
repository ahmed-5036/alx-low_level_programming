# 0x0B. C - malloc, free

## Introduction
In this C programming project, we will explore memory allocation and deallocation using `malloc` and `free`. These functions allow us to dynamically allocate memory during runtime, which can be especially useful when working with data structures or arrays of unknown size.

## Tasks

### 0. Float like a butterfly, sting like a bee
**File:** `0-create_array.c`

- Create a function `char *create_array(unsigned int size, char c)` that creates an array of characters and initializes it with the specified character `c`.
- The function should return `NULL` if `size` is `0`.
- If memory allocation fails, return `NULL`.

### 1. The woman who has no imagination has no wings
**File:** `1-strdup.c`

- Create a function `char *_strdup(char *str)` that duplicates a given string `str` and returns a pointer to the duplicated string.
- The function should return `NULL` if `str` is `NULL`.
- If memory allocation fails, return `NULL`.

### 2. He who is not courageous enough to take risks will accomplish nothing in life
**File:** `2-str_concat.c`

- Create a function `char *str_concat(char *s1, char *s2)` that concatenates two strings `s1` and `s2`.
- The function should return a pointer to a newly allocated space in memory containing the concatenated string.
- Treat `NULL` as an empty string.
- If memory allocation fails, return `NULL`.

### 3. If you even dream of beating me you'd better wake up and apologize
**File:** `3-alloc_grid.c`

- Create a function `int **alloc_grid(int width, int height)` that returns a pointer to a 2-dimensional array of integers.
- Each element of the grid should be initialized to `0`.
- The function should return `NULL` if `width` or `height` is `0` or negative.

### 4. It's not bragging if you can back it up
**File:** `4-free_grid.c`

- Create a function `void free_grid(int **grid, int height)` that frees a 2-dimensional grid previously created by the `alloc_grid` function.
- Ensure that all allocated memory is properly deallocated to avoid memory leaks.

## Requirements and Notes

- All code should follow the Betty style and be compiled with specified flags.
- Do not use global variables.
- Do not use standard library functions other than `malloc` and `free`.
- The `main` function in the provided examples is for testing purposes and does not need to be included in your submission.

## Learning Objectives

By completing this project, you should have a good understanding of the following concepts:

- Automatic and dynamic memory allocation
- The use of `malloc` and `free` functions
- When and why to use dynamic memory allocation
- How to use Valgrind to check for memory leaks

---

**Project completion date:** Sep 6, 2023

