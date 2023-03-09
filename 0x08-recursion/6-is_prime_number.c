#include "main.h"
/**
 * is_prime_number -function that returns 1 if the input integer is a prime nber,
 * otherwise return 0
 * @n: input char
 * Return: int.
 */
int is_prime_number(int n)
{
if (n < 0)
return (0);
else if (n == 1)
return (0);
else
if (C_P(2, n) == 0)
return (1);
else
return (0);
}
/**
 * C_P -function that check if input integer is a prime nber.
 * @n: input int
 * @i: input int
 * Return: int.
 */
int C_P(int i, int n)
{
if (n == i)
return (0);
else
if (n % i == 0)
return (1);
else
return C_P(i + 1, n);
}
