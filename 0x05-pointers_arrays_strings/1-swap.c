#include "main.h"

/**
 * swap_int - rest funcation
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 */

void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
