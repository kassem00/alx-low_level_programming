#include "main.h"
/**
 * str_concat - immpalimante funcation array
 * @s1: the char.
 * @s2: the char.
 * Return: char.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int *ptr;
if (width <= 0 || height <= 0)
return (NULL);
else
{
ptr = malloc((height * width) * sizeof(int));
for (i = 0; i < width * height; i++)
ptr[i] = 0;
return (ptr);
}
