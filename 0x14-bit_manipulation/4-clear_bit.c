#include "main.h"

/**
 * clear_bit - sets the bit at a given index to 0
 * @n: pointer to the number
 * @index: index to set
 * Return: 1 if it worked, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > 63)
		return (-1);

	if ((*n & mask) != 0)
		*n = *n ^ mask;

	return (1);
}
