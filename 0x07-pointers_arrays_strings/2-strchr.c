#include "main.h"
/**
 * _memcpy - cpy
 * @c: input char
 * @s: input char
 * Return: char.
 */

char *_strchr(char *s, char c)
{
char i = s + strlen(s);
while(i > 0)
{
if(*(src + i) == c)
return (*(src + i));
else
i--;
}
return ('\0');
}
