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
int counter, n1, n2, resualt;
counter = n1 = n2 = resualt = 0;
if (argc > 0)
{
while (counter < argc)
{
if (argc == 3)
{
if (counter == 1)
n1 = atoi(argv[counter]);
else if (counter == 2)
n2 = atoi(argv[counter]);
}
else
{
printf("0\n");
return (1);
}
resualt = (n1 + n2);
counter++;
}
printf("%d\n", resualt);
}
return (0);
}
