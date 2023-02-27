#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints every other character of a string
 * @str: pointer to char
 * Return: nothing
 */

void puts_half(char *str)
{
if (strlen(str) % 2 == 0)
{
size_t i = strlen(str) / 2;
while (i <= strlen(str))
{
_putchar(str[i]);
i++;
}
}
else
{
/*odd*/
}
_putchar('\n');
}
