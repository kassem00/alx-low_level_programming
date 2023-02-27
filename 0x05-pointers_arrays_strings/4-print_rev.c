#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - function that returns the length of a string.
 * @str: pointer to char
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
