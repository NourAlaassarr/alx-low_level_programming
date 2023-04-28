#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linkedlist
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *tofree;

	while (head)
	{
		tofree = head->next;
		free(head->str);
		free(head);
		head = tofree;
	}
}
