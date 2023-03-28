#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: void
 */
void    print_rev(char *s)
{
int    r;
int    n;

n = 0;
while (s[n] != '\0')
n++;
r = n - 1;
while (r >= 0)
{
_putchar(s[r]);
r--;
}
_putchar('\n');
}
