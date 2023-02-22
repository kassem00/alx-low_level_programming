#include "main.h"
/**
* print_sign - function that is lowercase?
* @n: The input character
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('1');
}
if (n == 0)
{
return (0);
_putchar('0');
}
if (n < 0)
{
return (-1);
_putchar((char)45);
_putchar((char)49);
}
}
