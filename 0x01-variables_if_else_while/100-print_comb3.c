#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints the lowercase num[2]bet in reverse,
* followed by a new line.
* Return: 0
*/
int main(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
