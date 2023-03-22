#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: the character to check
 * Return: On Success 1.
 * On error, 0
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
