#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *new;
	unsigned int str_i = 0, str_len = 0;

	/* Cannot proceed if str is nnULL*/
	if (str == NULL)
		return (NULL);
	/* Calculate the str len */
	while (str[str_len])
		str_len++;
	new = malloc(sizeof(char) * (str_len + 1));
	/* OS can encounter exceptions */
	if (new == NULL)
		return (NULL);
	/* Duplicate*/
	while ((new[str_i] = str[str_i]) != '\0')
		str_i++;
	return (new);
}
