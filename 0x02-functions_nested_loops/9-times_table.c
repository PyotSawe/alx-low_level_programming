#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int x;
	int y;
	int product;

	for (y = 0; y < 10; ++y)
	{
		for (x = 0; x < 10; ++x)
		{
			product = (x * y);
			if (product == 0)
			{
				_putchar('0' + product);
				_putchar(',');
				_putchar(' ');
			}
			else if (product < 10)
			{
				_putchar('0' + product);
				_putchar(',');
				_putchar(' ');
			}
			else if (product > 10)
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
