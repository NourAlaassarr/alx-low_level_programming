#include "main.h"

/**
 * _sqrt_ - search for the natural square root of a number
 * @n: number to find the natural square root
 * @i: iterator
 *
 * Return: natural square root of number or -1
 */

int _sqrt_(int n, int i)
{
    if (i * i > n)
        return (-1);

    if (i * i == n)
        return (i);

    return (_sqrt_(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the natural square root
 *
 * Return: natural square root of number or -1
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (_sqrt_(n, 0));
}
