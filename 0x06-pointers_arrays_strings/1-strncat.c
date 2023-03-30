/**
 * _strncat - concatenates two strings. given bytes to conc
 * @dest: char pointer to final concatinated str
 * @src: source of string to concatinate
 * @n: number of bytes to concatinate
 *
 * Return: Concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	/*Mark where to start from*/
	int dest_i = 0;
	int src_i = 0;
	/*Move to the last index of dest*/
	while (*(dest + dest_i) != '\0')
		dest_i++;
	/*Start and Repeat Concat until */
	for (; src_i < n && *(src + src_i) != '\0'; src_i++, dest_i++)
		*(dest + dest_i) = *(src + src_i);
	/*Append '\0' on the last index of dest*/
	*(dest + dest_i) = '\0';
	return (dest);
}

