#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - function that prints array
 * @dest: first array of string
 * @src: 2 array of string
 * Return: char.
 */

char *_strcpy(char *dest, char *src)
{
int i;
while (src[i] != '\0')
{
*(dest + i) = *(src + i);
i++;	
}
*(dest + i) = '\0';
return (dest);
}
