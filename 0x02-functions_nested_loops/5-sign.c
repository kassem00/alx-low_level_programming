#include "main.h"
/**
* print_sign - function that is lowercase?
* @n: The input character
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int print_sign(int n)
{
int x;
if (n > 0)
{
x = 1;
_putchar('1');
}
if (n < 0){
x = -1;
_putchar((char)45);
_putchar((char)49);
}
if (n == 0)
{
x = 0;
_putchar('0');
}
return (x);
}