#include "variadic_functions.h"
/**
 * sum_them_all - sum them all
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters .
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list VA;
unsigned int i, sum = 0;
va_start(VA, n);
for (i = 0; i < n; i++)
sum += va_arg(VA, int);
va_end(VA);
return (sum);
}
