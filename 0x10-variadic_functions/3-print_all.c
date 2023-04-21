#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: format of the input
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list p;
	char *s, *string;
	int i;

	s = "";
	i = 0;

	va_start(p, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(p, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(p, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(p, double));
					break;
				case 's':
					string = va_arg(p, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", s, string);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(p);
}
