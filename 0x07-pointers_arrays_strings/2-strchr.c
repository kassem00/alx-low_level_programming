#include "main.h"
/**
 * _strchr - cpy
 * @c: input char
 * @s: input char
 * Return: char.
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
