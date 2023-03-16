#include "main.h"
/**
 * create_array - immpalimante funcation array
 * @c: the char .
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *malloc_checked(uint8_t b);
{
uint8_t *array_of;
array_of = malloc(b);
if (array_of == NULL)
return (98);
else
return (array_of);
}
