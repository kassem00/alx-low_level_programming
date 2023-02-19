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
alpha++;
}
alpha = 97;
while (alpha <= 102)
{
putchar((char)alpha);
alpha++;
}
putchar('\n');
return (0);
}
