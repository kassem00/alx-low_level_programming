#include "main.h"
/**
 * times_table - function  prints the 9 times table
 *
 * Return: void.
 */

void times_table(void)
{
int ROW, column;
int multiplication_temp = 0;
for (ROW = 0; ROW < 10; ROW++)
{
for (column = 0; column < 10; column++)
{
multiplication_temp = (ROW * column);
if (multiplication_temp < 10)
{
if (column != 0)
_putchar('\t');
}
_putchar(multiplication_temp + '0');
}
else
{
_putchar(' ');
_putchar((multiplication_temp / 10) + '0');
_putchar((multiplication_temp % 10) + '0');
}
if (column != 9)
_putchar(',');
}
_putchar('\n');
}
}
