#include "main.h"
/**
 * _strstr - bt funcation.
 * @haystack: pointer to char.
 * @needle: pointer to char.
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
char *res;
char *aux;
while (*haystack != '\0')
{
res = haystack;
aux = needle;
while (*aux == *haystack && *aux != '\0'
&& *haystack != '\0')
{
haystack++;
aux++;
}
if (*aux == '\0')
return (res);
haystack = res + 1;
}
return (NULL);
}
