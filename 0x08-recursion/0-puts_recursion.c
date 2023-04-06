#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new line.
 * @s: ptr to string to put on stdout
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	/* Base Case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	/* Recursive case */
	_puts_recursion(s + 1);
}

