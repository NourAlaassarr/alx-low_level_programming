#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenate
 * @s1: string
 * @s2:string
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		p = malloc(sizeof(char) * (l1 + n + 1));
	else
		p = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!p)
		return (NULL);

	while (i < l1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		p[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
