#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - function that returns the length of a string.
 * @str: pointer to char
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
char temp;
while (i < i + 1)
{
temp = str[i];
if (temp == '\0')
break;
else
{
i++;
_putchar(temp);
}
}
_putchar('\n');
}
