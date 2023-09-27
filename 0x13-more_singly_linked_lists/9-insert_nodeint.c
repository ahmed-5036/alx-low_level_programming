#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int count = 0;
if (head == NULL)
return (NULL);
if (idx == 0)
return (add_nodeint(head, n));
temp = *head;
while (temp != NULL)
{
if (count == idx - 1)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
count++;
}
return (NULL);
}
