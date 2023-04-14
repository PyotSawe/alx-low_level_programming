#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: str 1.
 * @s2: str 2.
 * @n: bytes of s2 add to s1.
 *
 * Return: If fails - NULL.
 * else - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_msg;
	unsigned int s1_len = 0, s2_len = 0, s1_i, s2_i;

	/* Handle the case where given pointers are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculate their lengths */
	while (*(s1 + s1_len) != '\0')
		s1_len++;
	while (*(s2 + s2_len) != '\0')
		s2_len++;
	/* Handle the case where s2_len >= n*/
	if (n >= s2_len)
		n = s2_len;
	/* Allocate space of(len of s1 + n + 1) using n not s2_len */
	new_msg = malloc(sizeof(char) * (s1_len + n + 1));
	/* Handle exceptions thrown by memory manager*/
	if (new_msg == NULL)
		return (NULL);
	/* Copy s1 to first part of new */
	for (s1_i = 0; s1_i < s1_len; s1_i++)
		*(new_msg + s1_i) = *(s1 + s1_i);
	/* Copy s2 to next part of new*/
	for (s2_i = 0; s2_i < n; s2_i++, s1_i++)
		*(new_msg + s1_i) = *(s2 + s2_i);
	/* Append the last element*/
	*(new_msg + s1_i) = '\0';
	return (new_msg);
}
