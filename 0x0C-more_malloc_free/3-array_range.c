#include <stdlib.h>
#include "main.h"
/**
 * *array_range - create array
 * @min: min
 * @max: max
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, s;
	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
