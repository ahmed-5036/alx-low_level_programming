#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/* Struct definition for a singly linked list node */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/* Function to print all elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* Function to return the number of elements in a listint_t list */
size_t listint_len(const listint_t *h);
void free_listint2(listint_t **head);
/* Function to add a new node at the beginning of a listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

/* Function to add a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Function to free the memory allocated for a listint_t list */
void free_listint(listint_t *head);

/* Function to delete the head node of a listint_t list */
int pop_listint(listint_t **head);

/* Function to return the data of the nth node of a listint_t list */
int get_nodeint_at_index(listint_t *head, unsigned int index);

/* Function to delete the nth node of a listint_t list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* Prototype for the _putchar function */
int _putchar(char c);

#endif /* LISTS_H */

