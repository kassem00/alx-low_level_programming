#include "main.h"

/**
 * _memset - uppercase letters
 * @s: char to check
 * @b:
 * @n:
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *re = s;
while (s[i] != '\0' && i < n)
{
s[i]=b;
i++;
}
return (re);
}
