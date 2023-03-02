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
const int xa = strlen(s1);
int u = 0;
char temp[x1];
while (temp[u] != '\0')
{
temp[u] = *s1[u];
u++;
}
s2 = &temp;
return (*s2 -*s1);
}
