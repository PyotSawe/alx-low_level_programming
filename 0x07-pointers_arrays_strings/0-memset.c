/**
 * _memset - fill memory with a constant (byte)
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int s_i;

	/* Process s */
	for (s_i = 0; s_i < n; s_i++)
	{
		/* Make copy */
		*(s + s_i) = b;
	}
	return (s);
}
