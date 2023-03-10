#include <stdio.h>
#include <stdlib.h>
/**
 * main - funcation main
 * @argv: input char
 * @argc: input int
 * Return: 0.
 */
int main(int argc, char **argv)
{
int num, num2, res;
if (argc == 1)
printf("Error\n");
else
{
num = atoi(*(argv + 1));
num2 = atoi(*(argv + 2));
res = num * num2;
printf("%d\n", res);
}
exit(EXIT_SUCCESS);
return (0);
}
