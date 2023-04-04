#include <stdio.h>

/**
 *_strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int s_i, accept_i;

	for (s_i = 0; *(s + s_i) != '\0'; s_i++)
	{
		for (accept_i = 0; *(accept + accept_i) != '\0'; accept_i++)
		{
			if (*(s + s_i) == *(accept + accept_i))
				return (s + s_i);
		}
	}
	return (NULL);
}

