#include "main.h"
/**
 * alloc_grid - immpalimante funcation array
 * @width: input int.
 * @height: input int.
 * Return: char.
 */
char *argstostr(int ac, char **av)
{
int **arra;
int row, col;
if (width <= 0 || height <= 0)
return (NULL);100-argstostr.c
arra = malloc(sizeof(int *) * height);
if (arra == NULL)
return (NULL);
for (row = 0; row < height; row++)
{
arra[row] = malloc(sizeof(int) * width);
if (arra[row] == NULL)
{
for (; row >= 0; row--)
free(arra[row]);
free(arra);
return (NULL);
}
}
for (row = 0; row < height; row++)
for (col = 0; col < width; col++)
arra[row][col] = 0;
return (arra);
}
