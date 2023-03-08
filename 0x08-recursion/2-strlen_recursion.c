#include "main.h"

/**
 * _print_rev_recursion -  function that prints a string in reverse.
 * @s: input char
 * Return: void.
 */

int _strlen_recursion(char *s)
{
if(*s == '\0')
return (0)
else
return(_strlen_recursion(s+1));
}
