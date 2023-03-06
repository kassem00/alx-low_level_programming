#include "main.h"

/**
 * _memset - uppercase letters
 * @s: input char
 * @b: input char
 * @n: input char
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *re = s;
while (i < n)
{
s[i] = b;
i++;
}
return (re);
}
