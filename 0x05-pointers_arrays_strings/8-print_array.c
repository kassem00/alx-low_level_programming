#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints every other character of a string
 * @str: pointer to char
 * Return: nothing
 */

void print_array(int *a, int n)
{
int i = 0;
while (i < n){
printf("%d, ", a[i]);
}
}