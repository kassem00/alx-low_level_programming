#include "main.h"
/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: void.
 */
void print_triangle(int size)
{
int Row, Colm, Temp;
if (size > 0)
{
for (Row = 0; Row < size; Row++)
{
for (Colm = 0; Colm < size; Colm++)
{
Temp = (size - Row) - 1;
if (Colm < Temp)
_putchar(' ');
else
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
