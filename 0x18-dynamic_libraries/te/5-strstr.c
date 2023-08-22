#include "main.h"
/**
 * _strstr - bt funcation.
 * @haystack: pointer to char.
 * @needle: pointer to char.
 * Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
char *b;
char *x;
while (*haystack != '\0')
{
b = haystack;
x = needle;
while (*x == *haystack && *x != '\0'
&& *haystack != '\0')
{
haystack++;
x++;
}
if (*x == '\0')
return (b);
haystack = b + 1;
}
return (NULL);
}
