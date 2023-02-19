#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assign a random number to the variable n each time it is executed
* if the last digit of n is greater than 5: the string and is greater than 5
* if the last digit of n is 0: the string and is 0
* if the last digit of n is less than 6 and not 0: the string
* the string and is less than 6 and not 0
* Return: 0
*/
int main(void)
{
int n,last_using_reminder;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d ", n);
last_using_reminder= n % 10;
printf("is %d ", last_using_reminder);
if (last_using_reminder > 5)
{
printf("and is greater than 5\n");
}
else
{
if (last_using_reminder == 0)
{
printf("and is 0\n");
}
else
{
if(last_using_reminder < 6)
{
printf("and is less than 6 and not 0\n");
}
}
}
return (0);
}
