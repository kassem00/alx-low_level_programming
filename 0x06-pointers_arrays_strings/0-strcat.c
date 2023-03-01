#include "main.h"
#define TH_end '\0'
/**
 * *_strcat - rest funcation
 * @n: pointer to int
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
char *temp = dest + strlen(dest);
while (*src != '\0') {
*temp++ = *src++;
}
*ptr = TH_end;
return (*dest);
}
