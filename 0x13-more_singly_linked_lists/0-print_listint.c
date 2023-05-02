#include <stdio.h>
#include "lists.h"
/**
 * print_listint - printing
 * @h: pointer to head
 * size_t : size
 * listint_t: list to print
 * Return: size_t list
 **/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
		h = h->next;
	num++;
}
return (num);
}
