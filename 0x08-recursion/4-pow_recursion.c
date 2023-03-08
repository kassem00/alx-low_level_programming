#include "main.h"
/**
 * _pow_recursion - function that prints a string in reverse.
 * @n: input char
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
if (n < 0)
return (-1);
else
if(y == 0)
return (1);
else
return(x + _pow_recursion(x,y - 1));
}
