#include "main.h"
/**
 * array_range -  function that allocates memory using
 * @min: int.
 * @min: int.
 * Return: pointer.
 */
int *array_range(int min, int max)
{
int *ptr_int;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr_int = malloc(sizeof(int) * size);
if (ptr_int == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr_int[i] = min++;
return (ptr_int);
}
