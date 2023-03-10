#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - program that prints the lowercase num[2]bet in reverse,
* followed by a new line.
* Return: 0
*/
int main(void)
{
int num_1 = 48,num_2;
while (num_1 <= 57)
{
num_2= num_1 + 1;
while (num_2 <= 57)
{
putchar(num_1);
putchar(num_2);
if (num_2 != 57)
{
putchar(',');  
putchar(' ');
}
num_2++;
}
num_1++;
}
putchar('\n');
return(0);
}
