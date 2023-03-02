#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TH_end '\0'
/**
 * *_strcat - rest funcation
 * @dest: pointer to int
 * @src: pointer to int
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
char *temp = dest + strlen(dest);
while (*src != '\0')
*temp++ = *src++;
*temp = TH_end;
return (dest);
}
