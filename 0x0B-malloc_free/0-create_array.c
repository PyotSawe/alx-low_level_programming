#include <stdlib.h>
/**
 * create_array - creates an array in memory and initializes it
 *
 * @size: unsigned int, size of array to be created
 * @c: char to fill array with upon initialization
 *
 * Return: pointer to beginning of array
 */

char *create_array(unsigned int size, char c)
{
	char *msg;
	unsigned int msg_i = 0;

	/* cannot request zero size*/
	if (size <= 0)
		return (NULL);
	msg = (char *)malloc(sizeof(char) * size);
	/* Cannot processed if no space allocated */
	if (msg == NULL)
		return (NULL);
	while (msg_i < size)
	{
		*(msg + msg_i) = c;
		msg_i++;
	}
	*(msg + msg_i) = '\0';
	return (msg);
}
