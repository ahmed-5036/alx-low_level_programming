# C Linked List Tasks

This repository contains a set of C functions for working with linked lists. These functions allow you to create, manipulate, and perform operations on singly linked lists in the C programming language.

## List of Tasks

1. **Print List (`0-print_listint.c`):** This function prints all the elements of a `listint_t` linked list.

2. **List Length (`1-listint_len.c`):** This function returns the number of elements in a `listint_t` linked list.

3. **Add Node (`2-add_nodeint.c`):** This function adds a new node at the beginning of a `listint_t` linked list.

4. **Add Node at the End (`3-add_nodeint_end.c`):** This function adds a new node at the end of a `listint_t` linked list.

5. **Free List (`4-free_listint.c`):** This function frees the memory allocated for a `listint_t` linked list.

6. **Pop Head Node (`5-pop_listint.c`):** This function deletes the head node of a `listint_t` linked list and returns the head node's data.

7. **Get Nth Node (`6-get_nodeint.c`):** This function returns the data of the `n`-th node of a `listint_t` linked list.

8. **Delete Nth Node (`7-delete_nodeint.c`):** This function deletes the `n`-th node of a `listint_t` linked list.

## How to Use

To use these functions, you can include the respective C source files in your project and call the functions as needed. Make sure to provide the necessary data structures and include headers as required.

Example usage:

```c
#include "lists.h"

int main(void) {
    listint_t *myList = NULL;

    add_nodeint(&myList, 42);
    add_nodeint_end(&myList, 100);
    print_listint(myList);

    /* Add more function calls here as needed */

    free_listint(myList);
    return (0);
}

