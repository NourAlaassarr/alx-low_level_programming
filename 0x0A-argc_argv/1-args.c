#include <stdio.h>
/**
 * main - prints number followed by new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("argc = %d\n", argc - 1);
	return 0;
}

