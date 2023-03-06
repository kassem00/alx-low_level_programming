#include "main.h"
/**
 * _strpbrk - rest funcation.
 * @s: pointer to char.
 * @accept: pointer to char.
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
