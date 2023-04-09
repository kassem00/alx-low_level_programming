#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to convert to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}

}
