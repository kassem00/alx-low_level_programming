#include "main.h"
/**
*  print_last_digit_abs - function that is lowercase?
* @x: The input value.
* Return: x
*/
void jack_bauer(void)
{
int hu_f_dig=0,hu_s_dig=0,mi_f_dig=0,mi_s_dig=0;
while ((hu_s_dig <= 2  ) && (mi_s_dig <= 5 && mi_f_dig <= 9))
{
_putchar(hu_s_dig+ '0');
_putchar(hu_f_dig+ '0');
_putchar(':');
_putchar(mi_s_dig+ '0');
_putchar(mi_f_dig+ '0');
_putchar('\n');

if(mi_f_dig ==9)
{
if (mi_s_dig == 5)
{
if (hu_f_dig == 9){
hu_s_dig++;
hu_f_dig = 0;
mi_s_dig = 0;
mi_f_dig = 0;
}else{
if(hu_f_dig == 3 && hu_s_dig == 2)
break;
hu_f_dig++;
mi_s_dig = 0;
mi_f_dig = 0;
}
}
else
{
mi_s_dig++;
mi_f_dig = 0;
}
}
else
{
mi_f_dig++;
}
}
}
/**
 
 */

/*

*/