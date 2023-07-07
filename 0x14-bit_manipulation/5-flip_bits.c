#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second mumber
 *
 * Return: count of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count_bits = 0;
unsigned long int sum_up = n ^ m;
for (sum_up != 0)
{
sum_up >>= 1;
count_bits += (sum_up & 1);
}
return (count_bits);
}
