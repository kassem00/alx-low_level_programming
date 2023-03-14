#include "main.h"
/**
 * free_grid - immpalimante funcation free alloceted array
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: char.
 */
void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
