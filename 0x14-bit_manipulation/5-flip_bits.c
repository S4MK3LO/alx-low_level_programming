#include "main.h"

/**
 * flip_bits: returns the number of bits you would need to flip
 * @n: number one
 * @m: number two
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int mask = n ^ m;
if (mask != 0)
{
count += mask & 1;
mask >>= 1;
}
return (count);
}
