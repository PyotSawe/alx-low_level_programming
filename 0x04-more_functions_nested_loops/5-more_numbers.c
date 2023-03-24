#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int num;
	int times;

	for (times = 0; times <= 10; ++times)
	{
		for (num = 0; num <= 14; ++num)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
			else
				_putchar('0' + num);
		}
		_putchar('\n');
	}
}
