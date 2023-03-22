#include "main.h"

/**
 *
 * print_alphabet - A function to print all alphabets
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; ++alpha)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
