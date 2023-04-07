#include "main.h"

/**
 * _sqrt_value - search for the square value of n beginning
 * @n: number
 * @i:value
 * Return: natural square value
 */

int _sqrt_nut(int n, int i)
{
if (i* i > n)
return (-1);

if (i * i == n)
return (i);

return (_sqrt_nut(n, i + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: n
 * Return: natural square 
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_nut(n, 0));
}
