#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - unction that reverses a string.
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
    int i;
    int len = strlen(s);

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
