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
if (argc > 0)
printf("%d\n", argc - 1);
**argv = argc;
exit(EXIT_SUCCESS);
return (0);
}
