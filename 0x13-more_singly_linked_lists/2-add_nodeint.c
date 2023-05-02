#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - new node added
 * @head: head pointer
 * @n: num of new node
 * Return: new pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *pointer;
pointer = malloc(sizeof(listint_t));
if (pointer == NULL)
return (NULL);
pointer->n = n;
pointer->next = *head;
*head = pointer;
return (pointer);
}
