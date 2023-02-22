#include "main.h"
/**
* _islower - function that is lowercase?
* @c: The input character
* main - program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int _islower(int c)
{
if (122 > c < 97 || 90 > c < 60)
{
return (0);
}
else
{
return (1);
}
}
