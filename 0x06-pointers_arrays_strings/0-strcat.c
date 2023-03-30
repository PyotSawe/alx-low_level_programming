/**
 * _strcat - concatenates two strings.
 * @dest: destination of concatinated string
 * @src: src of string to concatinate
 *
 * Return: char pointer to concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_i = 0;
	int src_i = 0;

	/*Move to the end base of dest*/
	while (*(dest + dest_i) != '\0')
		dest_i++;
	/*Start to process the dest and src*/
	while (*(src + src_i) != '\0')
	{
		*(dest + dest_i) = *(src + src_i);
		dest_i++;
		src_i++;
	}
	*(dest + dest_i) = '\0';
	return (dest);
}
