#include "function_pointers.h"
/**
 * main - Prints operations.
 * @argc: The number of arguments.
 * @argv: An array of pointers.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int number1, number2;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
number1 = atoi(argv[1]);
op = argv[2];
number2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && number2 == 0) ||
    (*op == '%' && number2 == 0))
{
printf("Error\n");
exit(100);
}
