#include "main.h"
/**
 * *_strdup - immpalimante funcation array
 * @str: the char .
 * Return: char.
 */
char *_strdup(char *str)
{
int ret, size = _strlen(str), i;
char *ma_str;
if (str == NULL)
ret = 1;
else
{
ma_str = malloc((sizeof(char) * size) + 1);
for (i = 0; str[i] != '\0'; i++)
ma_str[i] = str[i];
ma_str[i] = '\0';
ret = 2;
}
if (ret == 1)
return (NULL);
else
return (ma_str);
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
