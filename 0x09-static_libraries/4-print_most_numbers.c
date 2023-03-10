#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
int NUM = 0;
while (NUM < 10)
{
if (NUM != 2 && NUM != 4)
_putchar(NUM + '0');
NUM += 1;
}
_putchar('\n');
}

