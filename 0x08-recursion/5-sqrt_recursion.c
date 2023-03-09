#include "main.h"
/**
 * _sqrt_recursion -  function that returns the natural square,
 * root of a numberber.
 * @n: input char
 * Return: int.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
if (n == 0)
return (0);
if (n == 1)
return (1);
return (get_number(n,1));
}
/**
 * _sqrt_recursion -  function that returns the natural square,
 * root of a numberber.
 * @n: input char
 * Return: int.
 */
int get_number(int number, int multi)
{
if (number == (multi * multi))
return (multi);
else if (number > (multi * multi))
return (get_number(number, multi + 1));
else
return (-1);
}