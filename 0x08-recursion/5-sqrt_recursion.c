#include "main.h"

/**
 * _sqrt_value - search for the square for n beginning
 * @n: number
 * @value:value
 * Return: natural square value for n
 */

int _sqrt_value(int num, int value)
{
if (value * value > num)
return (-1);

if (value * value == num)
return (value);

return (_sqrt_value(num, value + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: n
 * Return: natural square value
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_value(n, 0));
}
