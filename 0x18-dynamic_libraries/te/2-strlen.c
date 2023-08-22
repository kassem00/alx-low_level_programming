#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to char
 * Return: int
 */

int _strlen(char *s)
{
int i = 0;
char temp;
while (i < i + 1)
{
temp = s[i];
if (temp == '\0')
break;
else
i++;
}
return (i);
}
