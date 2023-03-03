#include "main.h"
/**
 * cap_string - Capitalizes the input char
 * @str: The string.
 * Return: pointer.
 */
char *cap_string(char *str)
{
int n = 0;
while (*(str + n) != '\0')
{
if (n == 0 && (*(str + n) >= 97 && *(str + n) <= 122))
{
*(str + n) = *(str + n) - ' ';
n++;
}
if (*(str + n) == ' ' || *(str + n) == '\n' || *(str + n) == '\t' \
|| *(str + n) == ',' || *(str + n) == ';' || *(str + n) == '!' \
|| *(str + n) == '?' || *(str + n) == '"' || *(str + n) == '(' \
|| *(str + n) == ')' || *(str + n) == '{' || *(str + n) == '}'
|| *(str + n) == '.')
{
n++;
if (*(str + n) >= 97 && *(str + n) <= 122)
{
*(str + n) = *(str + n) - ' ';
}
}
else
n++;
}
return (str);
}
