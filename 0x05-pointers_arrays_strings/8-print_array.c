#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - function that prints array
 * @n: number of elements
 * @a: array of int 
 * Return: void 
 */

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
i++;
}
printf("\n");
}
