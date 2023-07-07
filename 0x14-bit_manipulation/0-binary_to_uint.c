#include "main.h"
/**
* binary_to_uint - convert str to bin representation
* @b: name of what to convert
* Return: converted | 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int b_i = 0;/* index of every char*/
	unsigned int base = 0;

	if (b == NULL)/* do nothing when b empty*/
		return (0);
	while (*(b + b_i) != '\0')/*Process every bit*/
	{
		if (*(b + b_i) != '0' && *(b + b_i) != '1')
			return (0);
		base <<= 1;/*Otherwise left shift rotate*/
		if (*(b + b_i) == '1')
			base ^= 1;
		b_i++;
	}
	return (base);
}
