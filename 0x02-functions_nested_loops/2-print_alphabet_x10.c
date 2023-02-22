#include "main.h"
/**
* print_alphabet_x10 - function that prints the alphabet, in lowercase,
* followed by a new line.
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
void print_alphabet_x10(void)
{
int turns = 10;
while(turns < 10)
{
char alpha = 97;
while (alpha <= 122)
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
turns++;
}

