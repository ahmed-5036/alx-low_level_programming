# Singly Linked Lists in C

This project contains a set of C functions to work with singly linked lists. It includes functions to print, count, add nodes, and free the memory of a linked list.

## Files

1. `0-print_list.c`: Function to print all elements of a linked list.
2. `1-list_len.c`: Function to count the number of elements in a linked list.
3. `2-add_node.c`: Function to add a new node at the beginning of a linked list.
4. `3-add_node_end.c`: Function to add a new node at the end of a linked list.
5. `4-free_list.c`: Function to free the memory of a linked list.
6. `lists.h`: Header file containing function prototypes and struct definition.
7. `100-first.c` (Advanced): Function to print a message before the `main` function.
8. `101-hello_holberton.asm` (Advanced): Assembly program to print "Hello, Holberton."

## Usage

To use these functions, include the `lists.h` header file in your C code and compile it with the respective C files.

Example:

```c
#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node(&head, "World");
    print_list(head);
    free_list(head);

    return (0);
}

