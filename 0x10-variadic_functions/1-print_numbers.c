#include "variadic_functions.h"
/**
 * print_numbers - Write a function that prints numbers
 * @n: The number of paramters passed to the function.
 * @separator: is the string to be printed between numbers
 * @...: A variable number of paramters .
 * Return: int.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list VA;
unsigned int i, j;
va_start(VA, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(VA, int));
if (separator != NULL && (i + 1) < n)
{
for (j = 0; separator[j] != '\0'; j++)
printf("%c", separator[j]);
}
}
printf("\n");
va_end(VA);
}
