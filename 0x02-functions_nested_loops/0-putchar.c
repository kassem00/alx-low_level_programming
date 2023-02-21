#include "main.h"
/**
* main - assign a random number to the variable n each time it is executed
* if the number is greater than 0: is positive
* if the number is 0: is zero
* if the number is less than 0: is negative
* Return: 0
*/
int main(void)
{
char text[29]="_putchar";
int i;
while (i < 204)
{
if (text[i]=='\0')
break;
_putchar(text[i]);
i++;
}
_putchar('\n');
return (0);
}
