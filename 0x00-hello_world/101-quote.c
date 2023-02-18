#include <stdio.h>
#include <stdlib.h>
#define NUM_of_char 300
/**
 * Description: main-funcation {print text}
 * Return: 0 if it success.
 */
int main(void)
{
char the_text[NUM_of_char]="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
char comman[30]="echo -e'\n'";
for(int i=0;i<NUM_of_char;i++){
putchar(the_text[i]);
if(the_text[i]=='\0'){
break;
}
}
system(comman);
return (0);
}
