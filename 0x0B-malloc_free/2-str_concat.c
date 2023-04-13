#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int s1_len = 0, s2_len = 0, s1_i, s2_i;

	/* measure the len of the strs */
	while (*(s1 + s1_len) != 0)
		s1_len++;
	while (*(s2 + s2_len) != 0)
		s2_len++;
	new = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new == NULL)
		return (NULL);
	s1_i = 0;
	s2_i = 0;
	if (s1)
	{
		while (s1_i < s1_len)
		{
			*(new + s1_i) = s1[s1_i];
			s1_i++;
		}
	}
	if (s2)
	{
		while (s1_i < (s1_len + s2_len))
		{
			new[s1_i] = s2[s2_i];
			s1_i++;
			s2_i++;
		}
	}
	*(new + s1_i) = '\0';
	return (new);
}
