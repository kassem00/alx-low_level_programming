#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - function to perform operation.
 * @s: The operator passed as argument.
 * Return: A pointer to the function .
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t opertion[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
while (opertion[i].op != NULL && *(opertion[i].op) != *s)
i++;
return (opertion[i].f);
}
