#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int phres = 0;
while (str[phres])
{
while (!(str[phres] >= 'a' && str[phres] <= 'z'))
phres++;
if (str[phres - 1] == ' ' ||
str[phres - 1] == '\t' ||
str[phres - 1] == '\n' ||
str[phres - 1] == ',' ||
str[phres - 1] == ';' ||
str[phres - 1] == '.' ||
str[phres - 1] == '!' ||
str[phres - 1] == '?' ||
str[phres - 1] == '"' ||
str[phres - 1] == '(' ||
str[phres - 1] == ')' ||
str[phres - 1] == '{' ||
str[phres - 1] == '}' ||
phres == 0)
str[phres] -= 32;
phres++;
}
return (str);
}
