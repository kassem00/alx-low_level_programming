#include "main.h"
/**
 * _print_rev_recursion -  function that prints a string in reverse.
 * @s: input char
 * Return: void.
 */
int _strlen_recursion(char *s)
{
int x = 0;
if (*s != '\0')
{
x = _strlen_recursion(s + 1);
x++;
}
return (x);
}
