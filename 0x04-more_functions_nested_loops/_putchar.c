#include <unistd.h>

/**
 * _putchar - writes the character c to STDOUT
 * @chr: The character to write
 *
 * Return: On success 1
 * On error, -1 is returned
 */

int _putchar(char chr)
{
	return (write(1, &chr, 1));
}
