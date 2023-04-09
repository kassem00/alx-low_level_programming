#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	return ((n & mask) != 0);
}
