#include "main.h"

/**
 * _atoi - convert a given str into an integer
 *
 * @s: the string to convert
 *
 * Return: converted  int
 */

int _atoi(char *s)
{
	int head_sign = 1;
	int i = 0;
	unsigned int converted = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			head_sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		converted = (converted * 10) + (s[i] - '0');
		i++;
	}
	converted *= head_sign;
	return (converted);
}
