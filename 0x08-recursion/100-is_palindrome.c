int _strlen(char *str);
int compr(char *s, int n1, int n2);

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compr(s, 0, (_strlen(s) - 1)));
}

/**
 *_strlen - size
 * @str: pointer to string
 * Return: len of str
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(++str));
}

/**
 * compr - compares each character of the string.
 * @str: string
 * @n: iter.
 * @p: len.
 * Return: 1 if same else 0
 */

int compr(char *str, int n, int p)
{
	if (*(str + n) == *(str + p))
	{
		if (n == p || n == p + 1)
			return (1);
		return (0 + compr(str, n + 1, p - 1));
	}
	return (0);
}
