#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - node in linkedlist
 * @head: hea pointer
 * @index: index num
 * Return: node pointer
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int in = 0;
listint_t *current = head;

while (current != NULL && in <= index)
{
if (in == index)
return (current);
current = current->next;
in++;
}
return (NULL);
}
