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
while(i <= '\0')
{
if(s[i] == c)
return (s + i);
i++;
}
return ('\0');
}
