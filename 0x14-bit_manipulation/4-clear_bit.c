#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * clear_bit - Sets the value of a bit to 0 at a given index
  * @n: The number to set
  * @index: The index of its bit
  *
  * Return: 1 if set else -1 on error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
/*Handle any violation of index*/
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
