/**
 * _strstr - function locate a substring.
 * @haystack: str
 * @needle: substring
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *located = haystack, *found = needle;
	/* Process the str */
	while (*haystack != '\0')
	{
		/*check char if part of substr */
		while (*needle)
		{
			/* If the next chars are not the same */
			if (*haystack++ != *needle++)
				/* Then Return with Zero */
				break;
		}
		/* If at the end of substr */
		if (!*needle)
			return (located);
		needle = found;
		located++;
		haystack = located;
	}
	return (0);
}
