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
while(argc--)
printf("%s\n", *argv++);
exit(EXIT_SUCCESS);
return (0);
}
