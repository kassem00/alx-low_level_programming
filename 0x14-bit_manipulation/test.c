#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", power(12, 2));
    return (0);
}


int square(int  number,int sq)
{
int res = 1;
if (sq == 0)
return (1);
else
while (sq >= 0)
{
sq--;
res = res * number;
if (sq == 0)
break;
}
return (res);
}



int power(int number, int as)
{
	if (as < 0)
		return (-1);
	if (as == 0)
		return (1);
	return (number * power(number, as - 1));
}
