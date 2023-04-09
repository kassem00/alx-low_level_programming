#include "main.h"
/**
 * print_binary - DX2BIN function
 * @n: input decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i, f = 0;
if (n == 0)
{
_putchar('0');
return;
}
for (i = 16; i >= 0; i--)
{
unsigned long mk = (1 << i);
if (n & mk)
{
_putchar('1');
f = 1;
}
if (!(n & mk) && f == 1)
_putchar('0');
}
} 