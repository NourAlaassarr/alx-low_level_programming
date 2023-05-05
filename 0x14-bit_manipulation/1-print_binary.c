#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: binary num
 */
void print_binary(unsigned long int n) {

unsigned long int num = 1ul << (sizeof(unsigned long int) * 8 - 1);
int check = 0;
while (num)
{
if (n & num)
{
check = 1;
putchar('1');
}
else if (check)
{
putchar('0');
}
num >>= 1;
}
if (!check)
{
putchar('0');
}
}
