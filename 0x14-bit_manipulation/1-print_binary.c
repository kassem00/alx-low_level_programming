#include "main.h"
/**
 * binary_to_uint - BIN2DEC
 * @b: input Binary
 * Return: unsigned int
 */
void print_binary(unsigned long int n)
{
int i, f = 0;
if (n == 0)
_putchar('0');
else
for (i = 31; i >= 0; i--) {
int mask = (1 << i);
if (n & mask)
{
_putchar('1');
f = 1;
}
if (!(n & mask) && f ==1)
_putchar('0');
}
} 