#include "main.h"

/**
  * flip_bits - flips all bits to their compliments
  * @n: num 1
  * @m: num 2
  *
  * Return: 1 sucess 0 fail
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_msk = 0, flipped = 0;

	n_msk = n ^ m;
	/*repeat all process each time checking*/
	while (n_msk)
	{
		if (n_msk & 1)
			flipped++;
		n_msk >>= 1;
	}

	return (flipped);
}
