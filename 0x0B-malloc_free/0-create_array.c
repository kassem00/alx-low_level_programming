#include "main.h"
/**
 * create_array : immpalimante funcation array
 * @c: the char .
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *array_of_char;
unsigned int i, ret;
if (size == 0)
ret = 1;
else
{
array_of_char = malloc(sizeof(char) * size);
if (* array_of_char == NULL)
ret = 1;
else
{
for (i = 0; i < size; i++)
array_of_char[i] = c;
ret = 2;
}
}
if (ret == 1)
return (NULL);
else
return (array_of_char);
}
