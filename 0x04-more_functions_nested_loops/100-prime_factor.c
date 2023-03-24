#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * @num: number to find
 * @x: input number
 * Return: Always 0 (Success)
 */
double _sqrt(double x)
{
	float sqrt , tmp;
	sqrt = x / 2;
	tmp = 0;
	while(sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

void largest_prim_factor(long int num)
{
	int prmnu, largest;
	while(num % 2 == 0)
		num = num /2;
	for(prmnu = 3; prmnu <= _sqrt(num); prmnu +=2)
	{
		while (num % prmnu == 0)
		{
			num = num/ prmnu;
			largest = prmnu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d" , largest);
}

int main(void)
{
largest_prim_factor(612852475143);
return(0);
}
