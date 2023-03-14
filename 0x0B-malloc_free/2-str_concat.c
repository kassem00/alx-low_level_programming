#include "main.h"
/**
 * *_strdup - immpalimante funcation array
 * @s1: the char.
 * @s1: the char.
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *array_of_char;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
array_of_char = malloc((sizeof(char) * (i + j + 1)));
if (array_of_char == NULL)
return (NULL);
if (i > 0)
{
for (i = 0; s1[i] != '\0'; i++)
array_of_char[i] = s1[i];
}
if (j > 0)
{
for (j = 0; s2[j] != '\0'; j++ ,i++)
array_of_char[i] = s2[j];
array_of_char[i] = '\0';
}
return (array_of_char);
}