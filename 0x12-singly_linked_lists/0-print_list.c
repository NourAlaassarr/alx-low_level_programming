#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

/**
 * print_list - prints elements in list
 * @h: head pointer
 *
 * Return: elements
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
int num = 0;

for (num = 0 ; h != NULL ; num++)
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
