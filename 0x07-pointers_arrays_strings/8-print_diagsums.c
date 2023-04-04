#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - start function
 * @a: input one
 * @size: input two
 * Return: (Success)
 */
void print_diagsums(int *a, int size)
{
	int s, sum2, y;

	s = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		s = s + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", s, sum2);
}
