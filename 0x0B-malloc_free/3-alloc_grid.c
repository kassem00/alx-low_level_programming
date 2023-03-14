#include "main.h"
/**
 * str_concat - immpalimante funcation array
 * @s1: the char.
 * @s2: the char.
 * Return: char.
 */
int **alloc_grid(int width, int height)
{
int **arra;	
int row, col;	
if (width <= 0 || height <= 0)
return (NULL);	
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