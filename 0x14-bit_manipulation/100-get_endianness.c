#include "main.h"

/**
 * get_endianness - checks for endianess
 *
 * in other words check reverse binary
 * Return: 1 if little endian 0 if big endian
 */
int get_endianness(void)
{
	unsigned int dword = 1;
	char *base = (char *)&dword;/*Do type pruning.. becomes str*/

	if (*base)/*if start with above value*/
		return (1);
	return (0);
}
