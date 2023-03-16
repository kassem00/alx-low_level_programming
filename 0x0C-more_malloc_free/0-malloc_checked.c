#include "main.h"
/**
 * malloc_checked -  function that allocates memory using
 * @b: unsigned int.
 * Return: pointer.
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
