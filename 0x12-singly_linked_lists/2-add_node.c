#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: head pointer
 * @str: String to linked list
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	len = 0;
	while (str[len])
		len++;

	node->next = *head;
	node->len = len;

	*head = node;

	return (node);
}
