#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TH_end '\0'
/**
 * *_strncpy - function that concatenates two strings.
 * @dest: pointer to char.
 * @src: pointer to char.
 * @n: number of charcter.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
int u = 0;
while (src[u] != '\0' && u < n)
{
dest[u]=src[u];
u++;
}
u++;
dest[u] = '\0';
return (dest);
}

