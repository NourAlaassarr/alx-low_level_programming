#include "main.h"

/**
 * clear_bit - value to cleae=r
 * @n: pointer
 * @index: index
 *
 * Return: 1 if succeed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
