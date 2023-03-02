#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TH_end '\0'
/**
 * *_stnrcat - function that concatenates two strings.
 * @dest: pointer to char.
 * @src: pointer to char.
 * Return: char.
 */

char *_strncat(char *dest, char *src, int n)
{
int u = 0;
char *temp = dest + strlen(dest);
while (*src != '\0' && u < n)
*temp++ = *src++;
u++;
*temp = TH_end;
return (dest);
}
