#include "main.h"
/**
 * create_array : immpalimante funcation array
 * @c: the char .
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c){
char *array_of_char;
unsigned int i;
if (size == 0)
return (NULL);
else
{
array_of_char = malloc(sizeof(char) * size); 
for (i = 0; i < size ;i++)
array_of_char[i] = c;
return (array_of_char);
}
}
