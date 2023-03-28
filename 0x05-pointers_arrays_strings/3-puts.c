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
		int char_pos;

		for (char_pos = 0; str[char_pos] != '\0'; char_pos++)
		{
			_putchar(str[char_pos]);
		}
		_putchar('\n');
	}
}
