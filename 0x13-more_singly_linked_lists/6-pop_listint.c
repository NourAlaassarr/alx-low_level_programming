#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  deleting head
 * @head: Head pointer
 * Return: node to head
 */
int pop_listint(listint_t **head)
{
int current;
listint_t *tmper;
if (*head == NULL)
{
return (0);
}
tmper = (*head)->next;
current = (*head)->n;
free(*head);
*head = tmper;
return (current);
}
