#include "main.h"
/**
 * factorial - function that prints a string in reverse.
 * @n: input char
 * Return: int.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
