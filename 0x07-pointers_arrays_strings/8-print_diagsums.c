#include "main.h"
/**
 * print_diagnum1s - bt funcation.
 * @a: int.
 * @size: int.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int temp = 0;
int num1, num12;
num1 = num12 = 0;
while (i < (size * size))
{
temp = *(a + i);
num1 = num1 + temp;
i = i + size + 1;
}
i = size - 1;
while (i < ((size * size) - 1))
{
temp = *(a + i);
num12 = num12 + temp;
i = i + (size - 1);
}
printf("%d, %d\n", num1, num12);
}
