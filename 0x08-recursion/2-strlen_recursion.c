/**
 *_strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a str.
 */

int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return (0);
	/* Recursive case*/
	else
		return (1 + _strlen_recursion(++s));
}
