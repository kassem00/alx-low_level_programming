#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev -  function that prints a string, in reverse, followed by a new line.
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s)
{

int i = strlen(s);
while (i > 0)
{
i--;
_putchar(s[i]);
}
_putchar('\n');
}
