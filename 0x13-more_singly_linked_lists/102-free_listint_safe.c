#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - free linkedlist with free
 * @h: head pointer
 * Return: all freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *current;
	int i;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
