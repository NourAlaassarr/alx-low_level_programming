#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  *malloc_checked - allocates memory
 * @b: number
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b * sizeof(char));
	if(p == NULL)
		exit(98);
	else
		return(p);
}
