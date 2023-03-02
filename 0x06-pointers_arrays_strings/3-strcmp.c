#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TH_end '\0'
/**
 * _strcmp - function that concatenates two strings.
 * @s1: pointer to char.
 * @s2: pointer to char.
 * Return: char.
 */

int _strcmp(char *s1, char *s2)
{
int u = 0;
while (s1[u] != '\0')
{
if (s1[u] < s2[u])
{
return (*(s1 + u) - *(s2 + u));
}
else
{
if (s1[u] > s2[u])
{
return (*(s1 + u) - *(s2 + u));
}
}
u++;
}
return (0);
}
