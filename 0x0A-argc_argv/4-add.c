#include <stdio.h>
#include <stdlib.h>
/**
 * main - funcation main aa
 * @argv: input char
 * @argc: input int
 * Return: 0.
 */
int main(int argc, char **argv)
{
int flag=0,con = 1,num1, num2, res;
if (argc >= 1)
printf("0\m");
else
{
while(con <= argc){
if(isdigit(*(argv + con) != 1)
printf("Error\n");
else
num1 = atoi(argv[con]);
num2 = atoi(argv[con+1]);
res = num1 + num2;
printf("%d\n", res);
}
}
return (0);
}
