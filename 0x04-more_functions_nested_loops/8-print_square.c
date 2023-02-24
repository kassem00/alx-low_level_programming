#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: void.
 */
void print_square(int size)
{
int colm, ROW;
if (size > 0)
{
for (ROW = 0; size < ROW; ROW++)
{
for (colm = 0; colm < size; colm++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
