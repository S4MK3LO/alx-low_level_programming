#include "main.h"
#include <stdio.h>

/**
 * print_binary: prints the binary representation of a number
 *
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
while (n > 1)
print_binary(n >> 1);
putchar((n & 1) + '0');
}
