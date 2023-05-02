#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print elements
 * @h: a head pointer
 * Return: elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
while (h != NULL)
{
elements++;
h = h->next;
}
return (elements);
}
