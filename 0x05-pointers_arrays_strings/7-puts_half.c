#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: String passed
 */

void puts_half(char *str)
{
	int char_pos = 0;
	int str_len = 0;
	int middle;

	while (str[char_pos++])
		str_len++;
	if ((str_len % 2) == 0)
		middle = str_len / 2;
	else
		middle = (str_len + 1) / 2;
	for (char_pos = middle; char_pos < str_len; char_pos++)
		_putchar(str[char_pos]);
	_putchar('\n');
}
