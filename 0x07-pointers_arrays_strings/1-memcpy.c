/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Addresses should be negtive*/
	unsigned int shared_i;
	/* Process */
	for (shared_i = 0; shared_i < n; shared_i++)
	{
		/* Make a copy */
		*(dest + shared_i) = *(src + shared_i);
	}
	/* Return the Copy */
	return (dest);
}

