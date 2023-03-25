#include "main.h"

/**
 * print_line - Function that prints seq of ('_') n times
 *
 * @n: number times the '_' should be printed
 *
 * Return: Does not return anything
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int count;

		for (count = 0; count <= n; count++)
			_putchar('_');
	}
	_putchar('\n');
}
