#include <unistd.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements in list
 * @h: head pointer
 *
 * Return: elements
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
int c = 0;

for (c = 0 ; h != NULL ; c++)
{
if (h->str != NULL)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

h = h->next;
count++;
}
return (count);
}
