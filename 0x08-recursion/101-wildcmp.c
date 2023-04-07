/**
 * wildcmp - compares two strings and returns
 * @s1: str 1
 * @s2: str 2
 *
 * Return:  returns 1 if the strings can be considered identical,
 * otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	/*Base case when s1 is empty*/
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	/*Base case when s2 has wildcard*/
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	/*Recursive case*/
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
