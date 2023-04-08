#include "main.h"
/**
 * init_dog - function initialize a variable of type struct
 * @d: name of struct
 * @name: dog name
 * @age: dog age
 * @owner: ownder name
 */
unsigned int binary_to_uint(const char *b)
{
int max =_strlen(b), counter = 0;
unsigned int res = 0;
if (b == NULL)
return (0);
while(max >= 0 && max--)
{
if (*(b + max) == '1')
res += power(2,counter);
else if (*(b + max) != '0')
return (0);
counter++;
}
return (res);
}


/**
 * init_dog - function initialize a variable of type struct
 * @d: name of struct
 * @name: dog name
 * @age: dog age
 * @owner: ownder name
 */

int power(int number, int as)
{
if (as < 0)
return (-1);
if (as == 0)
return (1);
return (number * power(number, as - 1));
}


int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}