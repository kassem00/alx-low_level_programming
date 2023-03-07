#include "main.h"
/**
 * print_chessboard - bt funcation.
 * @a: pointer to char.
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
int row = 0,col = 0;
while (col < 8)
{
while (row < 8)
{
_putchar(a[col][row]);
row++;
}
_putchar('\n');
col++;
row = 0;
}
}
