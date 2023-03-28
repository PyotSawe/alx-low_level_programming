

/**
 * _strlen - Returns the length of a string
 * @s: String to calculate its lenghts
 * Return: The lenght of string given in int
 * Description: The _strlen() function calculates
 * the length of the string pointed to by s,  excluding  the  terminating
 * null  byte ('\0').
*/

int _strlen(char *s)
{
	int length = 0;

	/*Don't calculate if s points to '\0'*/
	if (*s == '\0)
		return length;
	/*When s is not pointing at '\0'*/
	/* it means the str is present and you can calculate it*/
	else
	{
		while (*s != '\0')
		{
			++length;
			++s;
		}
	}
	return (length);
}


