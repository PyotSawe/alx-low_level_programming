#include "main.h"

/**
 * _mask - acts as a mask
 * @x: type
 */

static void _mask(unsigned long int x)
{
	if (x == 0)/*When to do nothing*/
		return;
	_mask(x >> 1);
	_putchar((x & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: type
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_mask(n);/* Use above tool to process*/
}
