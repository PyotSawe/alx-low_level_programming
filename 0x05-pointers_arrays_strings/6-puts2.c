#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: String to print every char
 */

void puts2(char *str)
{
	int char_pos = 0;

	while (char_pos >= 0)
	{
		if (str[char_pos] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (char_pos % 2 == 0)
			_putchar(str[char_pos]);
		char_pos++;
	}
}
