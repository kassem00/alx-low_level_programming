#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int main(void)
{
char alpha=97;
while(alpha <= 122){
putchar((char)alpha);
alpha++;
}
putchar('\n');
return (0);
}
