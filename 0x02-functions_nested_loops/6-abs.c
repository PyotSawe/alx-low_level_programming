#include "main.h"

/**
 * _abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */

int _abs(int num)
{
	if (num > 0)
	{
		return ((1 * num));
	}
	else if (num < 0)
	{
		return ((-1 * num));
	}
	else
		return (0);
}
