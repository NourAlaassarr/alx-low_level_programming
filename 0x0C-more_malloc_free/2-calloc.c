#include <stdlib.h>
#include "main.h"

/**
 * _memset - fill the memory with constant byte
 * @s: memory 
 * @b: char 
 * @n: number of times to copy char b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for array
 * @nm: number
 * @size: size 
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nm, unsigned int size)
{
	char *p;

	if (nm == 0 || size == 0)
		return (NULL);
	p = malloc(size * nm);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nm * size);
	return (p);
}
