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
printf("%d\n", argc);
**argv=argc;
exit(EXIT_SUCCESS);
return (0);
}
