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
size_t i = (strlen(str) - 1)/ 2;
if (strlen(str) % 2 == 0)
{
while (i < strlen(str))
{
i++;
_putchar(str[i]);
}
}
else
{
/*odd*/
}
}
