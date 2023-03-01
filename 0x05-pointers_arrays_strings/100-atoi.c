#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - function that convert a string to an int value
 * @s: input
 * Return: int
 */


int _atoi(char *s)
{
int i = 0;
int n = 0;
int sign = 1;
while ((s[i] < 48 || s[i] > 57) && s[i] != 0)
{
if (s[i] == 45)
sign = sign * -1;
i++;
}
while ((s[i] >= 48 && s[i] <= 57) && s[i] != 0)
{
if (n >= 0)
{
n = n * 10;
n = n - (s[i] - 48);
i++;
}
else
{
n = n * 10 ;
n = n - (s[i] - 48);
i++;
}
}
sign = sign * -1;
return (n * sign);
}
