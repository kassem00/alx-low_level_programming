#include "main.h"
/**
* _islower - function that is lowercase?
* @c: The input character
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int _islower(int c)
{
if (c >= 122 && c <= 97)
{
if (c >= 90 && c <= 65)
{
return (1);
}
else
{
return (0);
}
}
}
