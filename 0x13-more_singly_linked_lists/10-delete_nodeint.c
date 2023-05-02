#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - delete node in position
 * @head: head ponter
 * @index: node index to delete
 * Return: On success - 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *data = *head, *current;
	unsigned int i;

	if (data == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(data);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (data->next == NULL)
			return (-1);

		data = data->next;
	}

	current = data->next;
	data->next = current->next;
	free(current);
	return (1);
}

