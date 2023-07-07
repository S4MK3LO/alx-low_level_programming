#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @num: number
 *
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
if (num >= 2)
print_binary(num >> 1);
_putchar((n & 1) + '0');
}
else
{
_putchar('0');
}
}
