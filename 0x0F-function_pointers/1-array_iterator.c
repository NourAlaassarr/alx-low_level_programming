#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - iterate and print nummbers 
 * @array: array
 * @size: number of elements
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	for (i = 0; i < size; i++)
	{ 
	    action(array[i]);
	}


}
