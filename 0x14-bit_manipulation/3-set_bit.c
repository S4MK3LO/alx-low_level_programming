#include "main.h"

/**
 * set_bit: takes a pointer to an unsigned long int and an index as input
 * @n: the pointer
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
while (index >= (sizeof(unsigned long int)*8))
{
return -1;
}
*n |= (1UL << index);
return 1;
}
