#include <stdio.h>
#include <stdlib.h>

int main()
{
int y[60]={1,1};
int z[100];
int i=0;
int x = 0;
while(i<60)
{
y[i+2]=y[i]+y[i+1];
z[i]=y[i];
i++;
}
while( x < 50)
{
printf("%d\n", z[x]);
x++;
}
return (0);
}
