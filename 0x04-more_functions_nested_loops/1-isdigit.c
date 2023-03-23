#include <main.h>

/**
 * _isdigit - Checks for a digit bt 0 and 9
 * @c: digit to look for
 * Return: 1 if c is digit, otherise 0
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
