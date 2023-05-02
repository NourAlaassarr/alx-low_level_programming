#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - to free linkedlist
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
listint_t *current;
while (head != NULL)
{
current = head;
current = head->next;
free(current);
}
}
