#include "main.h"
/**
 * factorial - Calculates the factorial of number
 * @n: The number to calculate factorial
 * Return: The factorial of number
 */
int factorial(int n)
{
	if (n == 0)
	   return (1);
	else if (n < 0)
           return (-1);
	else
	   return (n * factorial(n - 1));
}
