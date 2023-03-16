#include "main.h"
/**
 * string_nconcat -  function that allocates memory using
 * @n: unsigned int.
 * @s1: input char.
 * @s2: input char.
 * Return: pointer to char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, string_leng1 = 0, string_leng2 = 0;
while (s1 && s1[string_leng1])
string_leng1++;
while (s2 && s2[string_leng2])
string_leng2++;
if (n < string_leng2)
s = malloc(sizeof(char) * (string_leng1 + n + 1));
else
s = malloc(sizeof(char) * (string_leng1 + string_leng2 + 1));
if (!s)
return (NULL);
while (i < string_leng1)
{
s[i] = s1[i];
i++;
}
while (n < string_leng2 && i < (string_leng1 + n))
s[i++] = s2[j++];
while (n >= string_leng2 && i < (string_leng1 + string_leng2))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
