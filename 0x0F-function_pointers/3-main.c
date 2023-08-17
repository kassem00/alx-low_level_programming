#include "function_pointers.h"
/**
 * main - Prints operations.
 * @argc: The number of arguments.
 * @argv: An array of pointers.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*ptr_to_fun)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if(*op != 47 || *op != 42		\
	   || *op != 45 || *op != 43)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ptr_to_fun = get_op_func(op);
	result = (*ptr_to_fun)(num1, num2);
	printf("%d\n", result);
	return (0);
}
