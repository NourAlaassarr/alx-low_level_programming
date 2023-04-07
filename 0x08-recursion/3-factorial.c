/**
 * factorial - function that returns the factorial number.
 * @n: number to calculate factorial of
 * Return: factorial of number
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
