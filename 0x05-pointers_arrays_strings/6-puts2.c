#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: pointer to char
 * Return: nothing
 */

void puts2(char *str)
{
int j = 0, temp;
while (str[j] != '\0')
{
temp = j % 2;
if (temp == 0)
{
_putchar(*(str + j));
}
j++;
}
_putchar('\n');
}
