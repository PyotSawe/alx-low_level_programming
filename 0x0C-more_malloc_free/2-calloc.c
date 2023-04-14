#include <stdlib.h>

/**
 *_calloc - allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         else - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *narry;
	unsigned int index;
	/* Handles the errors from the caller */
	if (nmemb == 0 || size == 0)
		return (NULL);
	narry = malloc(size * nmemb);
	/* Handles the exceptions from the mem allocate sys */
	if (narry == NULL)
		return (NULL);
	/* clear narry to 0 */
	for (index = 0; index < (size * nmemb); index++)
		*(narry + index) = '\0';
	return ((void *)narry);
}
