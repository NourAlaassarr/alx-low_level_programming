#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * argc: int 
 * argv:array of char
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	if(argc > 0)
	{
		for(i = 0; i < argc; i++)
		{ printf("%s\n", argv[i]);
		}
	}
	return (0);
}
