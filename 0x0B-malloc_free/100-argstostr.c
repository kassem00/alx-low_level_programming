#include "main.h"
/**
 * alloc_grid - immpalimante funcation array
 * @width: input int.
 * @height: input int.
 * Return: char.
 */
char *argstostr(int ac, char **av)
{
int i, x,count = 0;
char *ptr_arr_char;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i<ac; i++)
{
for(x = 0; av[i][x] != '\0'; x++);
count = count + x;
}
ptr_arr_char = malloc(sizeof(char) * count);
}
