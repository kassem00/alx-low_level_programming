#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints the lowercase alphabet in reverse,
* followed by a new line.
* Return: 0
*/
int main(void)
{
char alpha = 48;
while (alpha <= 57)
{
putchar((char)alpha);
if (alpha != 57)
{
putchar(',');
putchar(' ');
}
alpha++;
}
putchar('\n');
return (0);
}
