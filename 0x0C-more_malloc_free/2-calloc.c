#include "main.h"
/**
 * malloc_checked -  function that allocates memory using
 * @b: unsigned int.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
char *ptr_to_char;
if (nmemb == 0|| size == 0)
return (NULL);
ptr_to_char = malloc(size * nmemb);
if (ptr_to_char == NULL)
return (NULL);
_memset(ptr_to_char, 0, nmemb * size);
return (ptr_to_char);
}
