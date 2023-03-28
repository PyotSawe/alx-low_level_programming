#include "main.h"

/**
 * print_rev - reverses a given string
 * @s: String to reverse
*/

void print_rev(char *s)
{
	int cpos = 0;

	while (cpos >= 0)
	{
		if (s[cpos] == '\0')
			break;
		cpos++;
	}
	for (cpos--; cpos >= 0; cpos--)
		_putchar(s[cpos]);
	_putchar('\n');
}
