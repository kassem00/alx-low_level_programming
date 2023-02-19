#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int main(void)
{
char alpha = 96	;
while (alpha < 122)
{
if (alpha == 112 || alpha == 100)
{
alpha = alpha + 1; 
}
else
{
alpha++;
putchar((char)alpha);
}
}
putchar('\n');
return (0);
}
