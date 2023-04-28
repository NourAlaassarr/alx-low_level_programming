#include  "lists.h"
#include <stdlib.h>
/**
 * list_len - function to return node num
 * @h:head pointer
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
int i = 0;
for (i = 0 ; h != NULL ; i++)
{
count++;
h = h->next;
}
return (count);
}
