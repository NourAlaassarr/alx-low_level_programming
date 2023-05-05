#include "main.h"

/**
 * set_bit - sets a bit to index 1
 * @n: pointer
 * @index: index
 *
 * Return: return 1 if succeed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    *n |= 1UL << index;

    return (1);
}
