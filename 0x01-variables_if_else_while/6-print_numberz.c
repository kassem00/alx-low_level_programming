#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int main(void)
{
int i = 48;
while (i <= 57)
{
putchar((char)i);
i++;
}
putchar('\n');
return (0);
}
