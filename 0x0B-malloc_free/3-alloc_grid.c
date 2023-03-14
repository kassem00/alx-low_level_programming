#include "main.h"
/**
 * str_concat - immpalimante funcation array
 * @s1: the char.
 * @s2: the char.
 * Return: char.
 */
int **alloc_grid(int width, int height)
{
int i,j;
int **ptr = (int**)malloc(width * sizeof(int*));
for (i = 0; i < width; i++)
ptr[i] = (int*)malloc(width * sizeof(int));
if (width <= 0 || height <= 0)
return (NULL);
else
{
for (i = 0; i < width; i++)
for (j = 0; j < height; j++)
ptr[i][j] = 0;
return (ptr);
}
}