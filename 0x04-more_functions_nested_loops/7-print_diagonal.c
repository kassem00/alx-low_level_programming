#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input value to check
 * Return: void.
 */

void print_diagonal(int n)
{
int i = 0;
int j = 0;
while (i < n)
{
while (j <= i)
{
if (j != i)
_putchar(' ');
else
_putchar(92);
j++;
}
_putchar('\n');
i++;
j = 0;
}
if (n <= 0)
_putchar('\n');
}
