#include "main.h"
/**
 * binary_to_uint - BIN2DEC
 * @b: input Binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
int max, counter = 0;
unsigned int res = 0;
if (b == NULL)
return (0);
max = _strlen(b);
while (max-- && max >= 0)
{
if (b[max] == '1')
res += power(2, counter);
else if (b[max] != '0')
return (0);
counter++;
}
return (res);

}

/**
 * power - function power number
 * @number: input numper
 * @as: power as
 * Return: int
 */

int power(int number, int as)
{
if (as < 0)
return (-1);
if (as == 0)
return (1);
return (number * power(number, as - 1));
}
/**
 * _strlen - maxgth of string
 * @s: input char
 * Return: int
 */

int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
