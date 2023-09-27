#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if succeeded, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int count = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
temp = *head;
prev = NULL;
while (temp != NULL)
{
if (count == index)
{
prev->next = temp->next;
free(temp);
return (1);
}
prev = temp;
temp = temp->next;
count++;
}
return (-1);
}
