#include "main.h"

/**
 * set_bit - sets the bit at the given index to 1
 * @n: pointer to the number
 * @index: index to change
 * Return: 1 if worked and -1 if did not work
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
(void) index;
mask = 1UL << index; /* create a mask with a 1 at the index position */
if (index > 63) /* make sure index is within bounds */
return (-1);
*n |= mask; /* set the bit to 1 */
return (1);
}
