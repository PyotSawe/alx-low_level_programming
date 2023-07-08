#include "main.h"
#include <stddef.h>

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}


/**
* binary_to_uint - convert str to bin representation
* @b: name of what to convert
* Return: converted | 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, finished = 0, result = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			result += 1 << finished;

		finished++;
	}

	return (result);
}
