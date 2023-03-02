#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strncpy - function that copy strings.
 * @dest: pointer to char.
 * @src: pointer to char.
 * @n: number of charcter.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
int u = 0;
while (*(src + u) != '\0' && u < n)
{
*(dest + u) = *(src + u);
u++;
}
while (u != n)
dest[u++] = '\0';
return (dest);
}

