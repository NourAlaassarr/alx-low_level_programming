#include "main.h"
/**
 * _strchr -  Function
 * @s: char one
 * @c: char two
 * Return: NULL (SUCCESS)   if not found
 */
char *_strchr(char *s, char c)
{
int i=0;
for (; s[i] >= '\0'; i++)
{
if (s[i]  == c)
return (&s[i]);
}
return (0);
}
