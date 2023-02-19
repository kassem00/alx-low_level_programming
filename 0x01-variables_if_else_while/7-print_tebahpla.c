#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints the lowercase alphabet in reverse, followed by a new line.
* Return: 0
*/
int main(void)
{
char alpha = 122;
while (96 < alpha)
{
putchar((char)alpha);
alpha--;
}
putchar('\n');
return (0);
}
