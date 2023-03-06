#include "main.h"

/**
 * _memset - uppercase letters
 * @dest: input char
 * @src: input char
 * @n: input unsigned int
 * Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0;0 < n;i++, n--)
{
*(dest + i) = *(src + i);
}
return (dest);
}
