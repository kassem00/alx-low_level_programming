#include "main.h"

/**
 * largest_NUM_number - returns the largest_NUM of 3 numbers
 * @a: first input
 * @b: second input
 * @c: third input
 * Return: largest_NUM number
 */

int largest_NUM_number(int a, int b, int c)
{
	int largest_NUM;

	if (a >= b && a > c)
	{
		largest_NUM = a;
	}
	else if (b >= a && b > c)
	{
		largest_NUM = b;
	}
	else
	{
		largest_NUM = c;
	}

	return (largest_NUM);
}
