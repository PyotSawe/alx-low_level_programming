#include <main.h>
/**
 * _isupper - Checks the given char if it's upper
 * @c: Character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
