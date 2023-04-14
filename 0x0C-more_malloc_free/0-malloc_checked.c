#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_check - function 
 * @b: number
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p == 0)
		exit (98);
	else
		return (p);
}
