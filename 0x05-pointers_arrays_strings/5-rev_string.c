
/**
 * rev_string - reverses a string.
 * @s: String to reverse
 */

void rev_string(char *s)
{
	/*Measure the string*/
	int len = 0, i, j;
	char *str, temp_str;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}
	/*Make Copy*/
	str = s;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp_str = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp_str;
		}
	}
}
