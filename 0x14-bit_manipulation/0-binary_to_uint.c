#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, else 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int conversion = 0;
int catalyst;

if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{
if (*b != '0' && *b != '1')
return (0);

conversion = conversion * 2 + (*b - '0');
b++;
}
return (conversion);
}
