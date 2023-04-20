#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for integer
 * @array: array to be entered
 * @size: size of the array
 * @cmp: pointer to func
 *
 * Return: the index of array if success and -1 if failed
 */


int int_index(int *array, int size, int(*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

