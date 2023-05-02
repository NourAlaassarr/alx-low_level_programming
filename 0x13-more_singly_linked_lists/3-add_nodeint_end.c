#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - new node added
 * @head: head pointer
 * @n: numb in node
 * Return: address of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *node = *head;

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
while (node->next != NULL)
node = node->next;
node->next = new_node;
}
return (new_node);
}
