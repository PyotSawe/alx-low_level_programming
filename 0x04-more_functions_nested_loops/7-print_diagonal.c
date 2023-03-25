#include "main.h"

/**
 * print_diagonal - Draws a diagonal line made up of '\'
 *
 * @n: len of diagonal line in terms of '\'
 *
 * Return: Returns nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int times;
		int line;

		for (line = 0; line <= n; ++line)
		{
			for (times = 0; times <= n ; ++times)
			{
				if (times == line)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
