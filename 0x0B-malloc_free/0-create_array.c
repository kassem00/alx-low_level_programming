#include "main.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c){
char *array_of_char;
if (size == 0)
return (NULL);
else
{
array_of_char = mallo(sizeof(char) * size); 
array_of_char[0] = c;
}
return (array_of_char);
}
