#include "main.h"
/**
 * _strspn - rest funcation.
 * @s: pointer to char.
 * @accept: pointer to char.
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int A = 0;
int i;
while (*s)                                                                                                                   
{
for (i = 0; accept[i]; i++)                                                                              
{
if (*s == accept[i])                                                                                     
{                                                                                                            
A++;                                                                                             
break;                                                                                               
}
else if (accept[i + 1] == '\0')
return (A);
}
s++;
}
return (A);
}
