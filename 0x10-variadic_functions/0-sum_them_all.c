#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Add alll numbers of parameters
 * @n: number of parameters passed
 * @...: number which will be added
 *by nour
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pt;
	unsigned int i, sum;
	sum = 0;
	va_start(pt, n);
	for (i = 0; i< n; i++)
		sum+= va_arg(pt, int);
	va_end(pt);
	return (sum);
}
	
