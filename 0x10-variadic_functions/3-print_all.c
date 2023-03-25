#include "variadic_functions.h"
/**
 * print_all - function that prints all
 * @format: list of arguments
 * Return: void.
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *string, *splet = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", splet, va_arg(list, int));
break;
case 'i':
printf("%s%d", splet, va_arg(list, int));
break;
case 'f':
printf("%s%f", splet, va_arg(list, double));
break;
case 's':
string = va_arg(list, char *);
if (!string)
string = "(nil)";
printf("%s%s", splet, string);
break;
default:
i++;
continue;
}
splet = ", ";
i++;
}
}


printf("\n");
va_end(list);
}
