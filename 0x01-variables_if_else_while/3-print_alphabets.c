#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
* Return: 0
*/
int main(void)
{
char alpha = 97;
while (alpha <= 122)
{
putchar((char)alpha);
alpha++;
if (alpha == 123)
{
alpha = 65;
}
if (alpha == 91)
{
break ;
}
}
putchar('\n');
return (0);
}
