/**
 * _strncpy - copies n bytes string from src to dest
 * @dest: char* to where to copy the string
 * @src: char* to source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: char* to where the copied string exists
 */

char *_strncpy(char *dest, const char *src, int n)
{
	/*Mark where to start*/
	int shared_index;

	/*Process both msgs*/
	for (shared_index = 0;
			shared_index < n && *(src + shared_index) != '\0';
			shared_index++)
		/*By copying*/
		dest[shared_index] = src[shared_index];
	/*Currently shared_index == end then append '\0'*/
	for ( ; shared_index < n; shared_index++)
		dest[shared_index] = '\0';
	return (dest);
}
