#include <stdio.h>

void __attribute__((constructor)) flash();

/**
 * flash - Prints strings befor main
 */
void flash(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
