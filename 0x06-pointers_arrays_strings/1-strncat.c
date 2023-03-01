#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TH_end '\0'
/**
 * *_strncat - rest funcation
 * @n: pointer to int
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
int u = 0;
char *temp = dest + strlen(dest);
while (*src != '\0' && u < n) {
*temp++ = *src++;
u++;
}
*temp = TH_end;
return (dest);
}
