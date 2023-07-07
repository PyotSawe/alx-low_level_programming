#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: number
  * @index: The index to find
  *
  * Return: v
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cur_i = 0;

	while (n)/*process without bitwise ops*/
	{
		if (cur_i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		cur_i++;
	}

	if (index > cur_i && index < 63)
		return (0);

	return (-1);
}
