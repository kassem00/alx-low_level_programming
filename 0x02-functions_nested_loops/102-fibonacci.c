#include <stdio.h>
#include <stdlib.h>

int main()
{
int y[60]={1,1};
int z[100];
int i=7;
for(int i=0;i<60;i++){
y[i+2]=y[i]+y[i+1];
z[i]=y[i];
}
for (int x = 0; x < 50; x++)
{
printf("%d\n", z[x]);
}
return (0);
}
