#include "main.h"
/**
 * is_prime_number -function that returns 1,
 * if the input integer is a prime nber,
 * otherwise return 0
 * @n: input char
 * Return: int.
 */
int wildcmp(char *s1, char *s2)
{
int x = 0;
if (s1 != '\0' && s2 != '\0')
{
if(s1 == s2)
{
s1++;
s2++;
wildcmp(s1,s2);
}
else
return (0);
}
else
return (x);
}
