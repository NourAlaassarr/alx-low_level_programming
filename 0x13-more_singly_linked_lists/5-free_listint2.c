#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - freeing linkedlist
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
*head = NULL;
}
