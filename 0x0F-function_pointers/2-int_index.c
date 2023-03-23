#include "function_pointers.h"

/**
 * int_index - index funcation
 * @array: name of the person
 * @size: size of array
 * @cmp: pointer to funcation
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
