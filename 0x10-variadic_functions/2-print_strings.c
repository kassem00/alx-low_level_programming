#include "variadic_functions.h"
/**
 * print_numbers - Write a function that prints numbers
 * @n: The number of paramters passed to the function.
 * @separator: is the string to be printed between numbers
 * @...: A variable number of paramters .
 * Return: int.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list VA;
char *str;
unsigned int i, j;
va_start(VA, n);
for (i = 0; i < n; i++)
{
str = va_arg(VA, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && (i + 1) < n)
{
for (j = 0; separator[j] != '\0'; j++)
printf("%c", separator[j]);
}
}
printf("\n");
va_end(VA);
}
