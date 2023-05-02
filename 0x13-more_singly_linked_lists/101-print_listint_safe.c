#include "lists.h"
/**
 * print_listint_safe -  prints linked
 * @head: pointer
 * Return: all nodes
 */
size_t print_listint_safe(const listint_t *head)
{
    long int i;
	size_t number = 0;


	while (head)
	{
		i = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (i > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (number);
}
