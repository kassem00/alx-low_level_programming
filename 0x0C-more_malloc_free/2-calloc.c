#include "main.h"
/**
 * _calloc -  function that allocates memory using
 * @nmemb: unsigned int.
 * @size: unsigned int.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
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
/**
 * _memset - uppercase letters
 * @s: input char
 * @b: input char
 * @n: input char
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *re = s;
while (i < n)
{
s[i] = b;
i++;
}
return (re);
}
