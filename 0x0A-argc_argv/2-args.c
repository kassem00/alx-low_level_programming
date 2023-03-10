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
int i= 0 ;
while (argc > i){
printf("%s\n", *(argv + i));
i++;
}
exit(EXIT_SUCCESS);
return (0);
}
