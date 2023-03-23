#include <main.h>
#include <unistd.h>

/**
 * _putchar: Prints given character on stdout
 * @chr: character to write to fd
 * Return: 1 if no error othewise, 0
 */

int _putchar(char chr)
{
	return (write(1, &chr, 1));
}
