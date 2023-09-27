#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current = *h;
listint_t *next_node = NULL;
while (current != NULL)
{
count++;
next_node = current->next;
free(current);
if (next_node >= current)
break;
current = next_node;
}
*h = NULL;
return (count);
}
