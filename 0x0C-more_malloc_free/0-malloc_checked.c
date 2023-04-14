#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size to allocate.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	/* Allocates mem of b bytes*/
	void *mem = malloc(b);
	/* Handle exception by return with 98*/
	if (mem == NULL)
		exit(98);
	return (mem);
}
