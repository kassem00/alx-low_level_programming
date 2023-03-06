#include "main.h"

/**
 * _memset - uppercase letters
 * @s: char to check
 * @b:
 * @n:
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n);
{
int i;
for (i = 0;s[i] != '\0' && i < n;i++){
s[i]=b;
}
}
