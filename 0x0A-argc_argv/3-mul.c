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
if (argc == 1) 
printf("Error\n");
else
printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
exit(EXIT_SUCCESS);
return (0);
}
