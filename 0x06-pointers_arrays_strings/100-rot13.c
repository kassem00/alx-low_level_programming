#define END_OF_S '\0'
#include "main.h"
/**
 * rot13 - encode into 1337.
 * @n: input char.
 * Return: int.
 */
char *rot13(char *n)
{
int i = 0;
int j = 0;
char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
while (n[i] != END_OF_S)
{
while (l[j] != END_OF_S)
{
if (n[i] == l[j])
{
n[i]  = r13[j];
break;
}
j++;
}
j = 0;
i++;
}
return (n);
}