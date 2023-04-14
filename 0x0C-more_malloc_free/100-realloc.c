#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size:  is the new size, in bytes of the new memory block
 *
 * Return: NULL iff ptr == NULL .
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	unsigned int index;
	/*Handles case where new_size == old_size*/
	if (new_size == old_size)
		return (ptr);
	/* Handle case where ptr == NULLs */
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	/* Handle case where new_size is equal to zero, and ptr is not NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	mem = malloc(new_size);
	/* Handle the memory management*/
	if (mem == NULL)
		return (NULL);
	for (index = 0; index < old_size && index < new_size; index++)
		*(mem + index) = *(((char *)ptr) + index);
	free(ptr);
	return ((void *)mem);
}
