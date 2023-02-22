#include "main.h"
/**
* _abs - function that is lowercase?
* @x: The input value.
* Return: x
*/
int print_last_digit(int x)
{
if (x < 0)
x = x * -1;

while (x > 10)
{
 x= x/10;
}
return (x);
}
