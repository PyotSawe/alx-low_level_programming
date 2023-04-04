/**
 *_strspn - gets the leng of a prefix substring
 * @s: string to process
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int s_i, accept_i, h, flag;

	h = 0;
	for (s_i = 0; *(s + s_i) != '\0'; s_i++)
	{
		flag = 0;
		for (accept_i = 0; *(accept + accept_i) != '\0'; accept_i++)
		{
			if (*(s + s_i) == *(accept + accept_i))
			{
				h++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (h);
	}
	return (0);
}

