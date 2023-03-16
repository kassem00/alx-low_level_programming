#include "main.h"
/**
 * create_array - immpalimante funcation array
 * @c: the char .
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
void *array_of;
array_of = malloc(b);
if (array_of == NULL)
exit(98);
else
return (array_of);
}
