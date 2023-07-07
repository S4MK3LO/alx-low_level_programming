#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: number
 *
 * Return: bit at specified index , else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if ((n & (1 << index)) != 0)
return (1);

if (index > (sizeof(unsigned long int) * 8))
return (-1);

return (0);
}
