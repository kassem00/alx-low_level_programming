#include "main.h"
/**
* print_sign - function that is lowercase?
* @n: The input character
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int print_sign(int n)
{
int x = 0;
if (n > 0)
{
_putchar((char)43);
x = 1;
}
if (n < 0)
{
_putchar((char)45);
x = -1;
}
if (n == 0)
{
_putchar((char)48);
x = 0;
}
return (x);
}
