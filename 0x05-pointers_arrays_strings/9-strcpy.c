/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: Destination to copy to
 * @src: Src of string
 */

char *_strcpy(char *dest, char *src)
{
	char *copied = dest;

	while (*src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
	}
	return (copied);
}
