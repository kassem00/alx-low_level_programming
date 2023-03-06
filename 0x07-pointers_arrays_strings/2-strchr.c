#include "main.h"
/**
 * _memcpy - cpy
 * @c: input char
 * @s: input char
 * Return: char.
 */

char *_strchr(char *s, char c)
{
int i = 0;
while(i >= '\0')
{
i++;
if(s[i] == c)
return (s + i);
}
return ('\0');
}
