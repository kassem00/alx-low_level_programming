#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array -  function that reverse_array
 * in reverse, followed by a new line.
 * @a: pointer to int 
 * @n:  int 
 * Return: void
 */

void reverse_array(int *a, int n)
{
int  j = 0;
int temp[600];
while (n > 0)
{
n--;
temp[j] = a[n];
j++;
}

while (n < j)
{
a[n] = temp[n];
n++;
}
}
