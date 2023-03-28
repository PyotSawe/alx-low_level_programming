#include "main.h"

/**
 * _puts - prints a string, followed by new line
 * @str: Given string to print
*/

void _puts(char *str)
{
	if (*str == '\0')
		_putchar(*str);
	else
	{
		while (*str != '\0')
		{
			_putchar(*str);
			++str;
		}
		_putchar('\n');
	}
}
