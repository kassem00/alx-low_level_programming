#include "main.h"
/**
* print_alphabet - function that prints the alphabet, in lowercase, followed by a new line.
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
void print_alphabet(void)
{
char alpha = 97;
while (alpha <= 122)
{
_putchar((char)alpha);
alpha++;
}
_putchar('\n');
}

