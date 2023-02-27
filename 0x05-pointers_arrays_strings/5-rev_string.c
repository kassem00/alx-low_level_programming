#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev -  function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to char
 * Return: void
 */

void rev_string(char *s)
{
int i = strlen(s), j = 0;
char temp[600];
while (i > 0)
{
i--;
temp[j] = s[i];
j++;
}
while (i < j)
{
s[i] = temp[i];
i++;
}
}
