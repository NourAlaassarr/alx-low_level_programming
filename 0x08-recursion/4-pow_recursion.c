/**
 * _pow_recursion - returns the value of x power to y
 * @x: the base 
 * @y: the power
 * Return: the value of x power of y, or -1 if y is smaller than 0
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1;
    else if (y == 0)
        return 1;
    else
        return x * _pow_recursion(x, y - 1);
}
