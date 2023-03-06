#include "main.h"

/**
 * _memset - uppercase letters
 * @s: input char
 * @b: input char
 * @n: input char
 * Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; src[i] != '\0'; i++)
{
if (i < n)
break;
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
}
