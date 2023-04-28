#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add tail to tail
 * @head: head pointer
 * @str: stored in node
 * Return: address to element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tailto;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	tailto = *head;
	while (tailto->next)
	{
		tailto = tailto->next;
	}
	tailto->next = newnode;
	return (newnode);
}

