#include "main.h"
/**
 * _memset -function that fills the first n
 * @s :point of string to change
 * @b :value that will be put
 * @n :number of bits
 * Return :pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for(i = 0; i< n; i++)
	{
		s[i] = b;
	}
	return (s);
}
