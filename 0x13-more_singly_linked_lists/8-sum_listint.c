#include "lists.h"

/**
 * sum_listint - calculate sum in all linkedlist
 * @head: head pointer
 *
 * Return: addetion
 */
int sum_listint(listint_t *head)
{	int add;
	listint_t *current;


	current = head, add = 0;
	while (current)
		add += current->n, current = current->next;

	return (add);
}
