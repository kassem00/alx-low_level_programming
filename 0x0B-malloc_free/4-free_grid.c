#include "main.h"
/**
 * free_grid - immpalimante funcation free alloceted array
 * @height: height of the grid
 * Return: void.
 */
void free_grid(int **grid, int height)
{
int i = 0;
while(i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
