#include "main.h"

/**
 * _isalpha - checks for alphabetical char
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not found
 */

int _isalpha(int c)
{
	return ((_islower(c) || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
