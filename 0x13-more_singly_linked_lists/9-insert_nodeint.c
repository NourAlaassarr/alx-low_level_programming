#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add node in position with ind
 * @head: head pointer
 * @idx: place to add node
 * @n: node data
 * Return: node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int in;
	listint_t *node = *head;
	listint_t *pnode = malloc(sizeof(listint_t));

	if (!pnode)
		return (NULL);

pnode->n = n;
pnode->next = NULL;
if (idx == 0)
	{
pnode->next = *head;
		*head = pnode;
		return (pnode);
	}

	for (in = 0; in < idx - 1; in++)
	{
		if (!node)
		{
			free(pnode);
			return (NULL);
		}
node = node->next;
	}

pnode->next = node->next;node->next = pnode;

	return (pnode);
}
