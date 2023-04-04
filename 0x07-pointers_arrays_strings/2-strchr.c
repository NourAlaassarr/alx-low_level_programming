#include "main.h"
/**
 * _strchr -  Function
 * @s: char one
 * @c: char two
 * Return: NULL (SUCCESS)   if not found
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '0'; i++)
{
if (s[i]  == c)
return (s + i);
}
return (NULL);
}
