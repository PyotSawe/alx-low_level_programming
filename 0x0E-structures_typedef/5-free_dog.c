#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog at heap
 * @d: dog type
 * Return: void function to free memory
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free memory in order of allocation */
		free(d->name);
		free(d->owner);
		free(d);
	}
}
