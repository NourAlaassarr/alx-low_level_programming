#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Add alll numbers of parameters
 * @n: number of parameters passed
 * @...: number which will be added
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x, sum;

	sum = 0;

	va_start(p, n);

	for (x = 0; x < n; x++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
