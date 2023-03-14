#include "main.h"
/**
 * *_strdup - immpalimante funcation array
 * @str: the char .
 * Return: char.
 */
char *_strdup(char *str)
{
int ret, size = _strlen(str), i;
char *array_of_char;
array_of_char = malloc((sizeof(char) * size) + 1);
if (array_of_char == NULL)
{
ret = 1;
}
else
{
for (i = 0; str[i] != '\0'; i++)
array_of_char[i] = str[i];
array_of_char[i] = '\0';
ret = 2;
}
if (ret == 1)
return (NULL);
else
return (array_of_char);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to char
 * Return: int
 */

int _strlen(char *s)
{
int i = 0;
char temp;
while (i < i + 1)
{
temp = s[i];
if (temp == '\0')
break;
else
i++;
}
return (i);
}
