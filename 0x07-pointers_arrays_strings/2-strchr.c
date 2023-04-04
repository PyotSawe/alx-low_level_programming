/**
 * _strchr - locates a char in a string
 * @s: string to serch
 * @c: character to find
 * Return: pointer to first occurence of c character
 * Otherwise Returns '\0'
 */

char *_strchr(char *s, char c)
{
	unsigned int s_i;

	for (s_i = 0; *(s + s_i) != '\0'; s_i++)
		if (*(s + s_i) == c)
			break;
	return (*(s + s_i) == c ? (s + s_i) : '\0');
}
