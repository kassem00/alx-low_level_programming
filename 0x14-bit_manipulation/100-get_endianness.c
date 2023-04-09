#include "main.h"

/**
 * get_endianness - checks if computer is big or little endian
 *
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
    int num = 1;
    char *ptr = (char *)&num;
    
    return (*ptr);
}
