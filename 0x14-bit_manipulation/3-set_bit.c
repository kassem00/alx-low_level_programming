#include "main.h"
/**
 * set_bit - sets the bit at the given index to 1
 * @n: pointer to the number
 * @index: index to change
 * Return: 1 if worked and -1 if did not work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) /* check if index is valid */
        return (-1);
    
    unsigned long int mask = 1UL << index; /* create a mask with a 1 at the index position */

    *n |= mask; /* set the bit at index position to 1 */
    
    return (1);
}
